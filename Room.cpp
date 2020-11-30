/******************************************************************************
* Room.cpp
*
* Room class definition
* CS 281-0798, Fall 2020
*
* 
*
*******************************************************************************
*/
#include <iostream>
#include <vector>
#include <stdlib.h>
#include "Room.h"
#include "Treasure.h"
#include "Bogie.h"
#include "MagicWord.h"
//***********************************************************
// Room(std::string name)
//
// overload constructor
// 
// lrc changed for Week 6
//      name is now a call by value parameter
//      to allow Room("room") call (see Room() below)
//***********************************************************

Room::Room(std::string name)
{
    m_roomName = name;
    m_roomId = 0;           // #TODO room ID internal use
    m_roomPoints = 0;     
    m_entryText = "entering the " + m_roomName;
    m_exitText = "exiting the " + m_roomName;
// lrc added for Week 6
    m_pTreasure.clear();    // initialize Treasure vector
    m_pBogie.clear();       // initialize Bogie vector
    m_pWeapon.clear();      // initialize Weapon vector
    // initialize room text to known values
    m_roomTextArray[ROOM_NORTH] = "looking north";
    m_roomTextArray[ROOM_SOUTH] = "looking south";
    m_roomTextArray[ROOM_EAST] = "looking east";
    m_roomTextArray[ROOM_WEST] = "looking west";
    m_roomTextArray[ROOM_UP] = "looking up";
    m_roomTextArray[ROOM_DOWN] = "looking down";

// lrc added for Week 6
    // initialize room pointers
    m_nextRoomPtrArray[ROOM_NORTH] = nullptr;
    m_nextRoomPtrArray[ROOM_SOUTH] = nullptr;
    m_nextRoomPtrArray[ROOM_EAST] = nullptr;
    m_nextRoomPtrArray[ROOM_WEST] = nullptr;
    m_nextRoomPtrArray[ROOM_UP] = nullptr;
    m_nextRoomPtrArray[ROOM_DOWN] = nullptr;
}

//***********************************************************
// Room()
//
// constructor
//***********************************************************
Room::Room() : Room("room") {}

//***********************************************************
// bool setRoomName(name)
//***********************************************************
bool Room::setRoomName(std::string& name)
{
    m_roomName = name;
    return true;
}

//***********************************************************
// bool getRoomName(std::string& str)
//***********************************************************
bool Room::getRoomName(std::string& str) const
{
    str = m_roomName;
    return true;
}

//***********************************************************
// bool setRoomId(int roomId)
//***********************************************************
bool Room::setRoomId(int roomId)
{
    m_roomId = roomId;
    return true;
}

//***********************************************************
// int getRoomId() const
//***********************************************************
int Room::getRoomId() const
{
    return m_roomId;
}

//***********************************************************
// bool setRoomPoints(int points)
//***********************************************************
bool Room::setRoomPoints(int points)
{
    m_roomPoints = points;
    return true;
}

//***********************************************************
// int getRoomPoints() const
//***********************************************************
int Room::getRoomPoints() const
{
    return m_roomPoints;
}

//***********************************************************
// bool setEntryText(std::string entryText)
//***********************************************************
bool Room::setEntryText(std::string& entryText)
{
    m_entryText = entryText;
    return true;
}

//***********************************************************
// std::string getEntryText(std::string& str) const
//***********************************************************
bool Room::getEntryText(std::string& str) const
{
    str = m_entryText;
    std::cout << str << std::endl;
    
    return true;
}

//***********************************************************
// bool setExitText(std::string exitText)
//***********************************************************
bool Room::setExitText(std::string& exitText)
{
    m_exitText = exitText;
    return true;
}

//***********************************************************
// std::string getExitText(std::string& str) const
//***********************************************************
bool Room::getExitText(std::string& str) const
{
    str = m_exitText;
    std::cout << str << std::endl;
    return true;
}

//***********************************************************
// bool setRoomDirectionText(char direction, string& str)
//***********************************************************
bool Room::setRoomDirectionText(int direction, std::string& str)
{
    m_roomTextArray[direction] = str;
    return true;
}

//***********************************************************
// bool getRoomDirectionText(char direction,
//                           std::string& str) const
//***********************************************************
 bool Room::getRoomDirectionText(int direction, 
                                 std::string& str) const
{
     str = m_roomTextArray[direction];
     return true;
 }

//***********************************************************
// int addRoomTreasure(Treasure* pTreasure)
//
// install treasure in room treasure vector
// return how many treasures in room
//***********************************************************
 int Room::addRoomTreasure(Treasure* pTreasure)
 {
     // update room's treasure vector
     m_pTreasure.push_back(pTreasure);
     return m_pTreasure.size();
 }

//***********************************************************
// Treasure* takeRoomTreasure()
//
// #TODO allow selective treasure taking
//***********************************************************
Treasure* Room::takeRoomTreasure()
{
    Treasure* pT = nullptr;

    // make sure vector has an element to remove
    if (m_pTreasure.size() > 0)
    {
        // get element value then remove element
        pT = m_pTreasure.back();
        m_pTreasure.pop_back();
    }

    // return nullptr or pointer to treasure taken
    return pT;
}

//***********************************************************
// int getRoomTreasureCount() const
//
// return number of treasures in this room
//***********************************************************
int Room::getRoomTreasureCount() const
{
    return m_pTreasure.size();
}

// #TODO for Week 6
//      Implement these two member functions

//***********************************************************
// bool Room::setRoomDirectionPtr(int direction, Room* pRoom)
//
// set the pointer to the next room in this direction
//***********************************************************
bool Room::setRoomDirectionPtr(int direction, Room* pRoom)
{
    // #TODO implement and return true!
    m_nextRoomPtrArray[direction] = pRoom;
    return true; 
}

//***********************************************************
// Room* Room::getRoomDirectionPtr(int direction) const 
//
// return pointer to the next room in given direction
//***********************************************************
Room* Room::getRoomDirectionPtr(int direction) const 
{ 
    Room* pRoom = nullptr;
    pRoom->m_nextRoomPtrArray[direction];
    
    return pRoom;
}


int Room::addRoomBogie(Bogie* pBogie)
{
     // update room's Bogie vector
     m_pBogie.push_back(pBogie);
     return m_pBogie.size();
}

Bogie* Room::takeBogie()
{
    Bogie* pB = nullptr;

    // make sure vector has an element to remove
    if (m_pBogie.size() > 0)
    {
        // get element value then remove element
        pB = m_pBogie.back();
        m_pBogie.pop_back();
    }

    // return nullptr or pointer to Bogie taken
    return pB;
}

Weapon* Room::TakeWeapon()
{
    Weapon* pw = nullptr;

    // make sure vector has an element to remove
    if (m_pBogie.size() > 0)
    {
        // get element value then remove element
        pw = m_pWeapon.back();
        m_pWeapon.pop_back();
    }

    // return nullptr or pointer to Bogie taken
    return pw;
}
bool Room::DisplayHiddenData(MagicWord Light){
 //std::cout << "the lightSwitch was Off\n";
 
 lightSwitch = true;
 std::cout << "--Room Hidden information-------\n";
 std::cout << "--The lightSwitch is On!--------\n";
 std::cout << "--Room points: " << m_roomPoints << "---------\n";
 std::cout << "--Room Id: " << m_roomId << "-----------\n";
 
 return true;
}