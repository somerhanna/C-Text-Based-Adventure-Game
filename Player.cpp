/******************************************************************************
* Player.cpp
* 
* Player class definition
* CS 281-0798, Fall 2020
*
* 
*
*******************************************************************************
*/
#include <string>

#include "Room.h"
#include "Player.h"
#include "Treasure.h"
#include "Weapon.h"

//***********************************************************
// Player(std::string name)
//
// overload constructor
//***********************************************************
Player::Player(std::string name)
{
    m_name = name;
    m_points = 0;                   // accumulated points
    m_roomIdNow = 0;                // player must move to room to get points
    m_roomVisits = 0;               // how many rooms visited (with repeats)
}

//***********************************************************
// Player()
//
// constructor
//***********************************************************
Player::Player() : Player("Somer Hanna - Defult Player") { }

//***********************************************************
// bool setPlayerName(std::string& playerName)
//
// copies passed string into member string 
//***********************************************************
bool Player::setPlayerName(std::string& playerName)
{
    m_name = playerName;
    return true;
}

//***********************************************************
// bool getPlayerName(std::string& str) const
//
// copies member string into caller's string    
//***********************************************************
bool Player::getPlayerName(std::string& str) const
{
    str = m_name;
    return true;
}

//***********************************************************
// int addPoints(int points)
//
// adds passed value to player's points
//***********************************************************
int Player::addPoints(int points)
{
    m_points += points;
    return true;
}

//***********************************************************
// bool setPoints(int points)
//
// sets player's points to passed value
//***********************************************************
bool Player::setPoints(int points)
{
    m_points = points;
    return true;
}

//***********************************************************
// int getPoints() const
//
// returns how many points the player has
//***********************************************************
int Player::getPoints() const { return m_points; }

//***********************************************************
// int incrementRoomVisits()
//
// adds 1 to number of room visits
// returns updated room visits value
//***********************************************************
int Player::incrementRoomVisits()
{
    m_roomVisits++;
    return m_roomVisits;
}

//***********************************************************
// bool setRoomVisits(int visits)
//
// sets the player's number of room visits
//***********************************************************
bool Player::setRoomVisits(int visits)
{
    m_roomVisits = visits;
    return true;
}

//***********************************************************
// int getRoomVisits() const
//
// returns the player's number of room visits
//***********************************************************
int Player::getRoomVisits() const { return m_roomVisits; }

//***********************************************************
// int addPlayerTreasure(Treasure* pT)
//
// adds a Treasure instance pointer to the player's
// vector of Treasure instanc pointers
//
// returns the number of treasures in the vector
//***********************************************************
int Player::addPlayerTreasure(Treasure* pT)
{
    m_pTreasure.push_back(pT);
    return m_pTreasure.size();
}

//***********************************************************
// int Player::getPlayerTreasureInfo(
//                 std::vector<Treasure*>& tVector) const
//
// copy treasure vector elements to passed vector
//
// return number of treasure elements 
// #TODO same as Room::getRoomTreasureInfo()
//***********************************************************
int Player::getPlayerTreasureInfo(std::vector<Treasure*>& tVector) const
{
    if (m_pTreasure.size() == 0)
        return 0;

    // copy values - prevent direct access to Player vector
    for (Treasure* t : m_pTreasure)
    {
        tVector.push_back(t);
    }

    return tVector.size();
}

//***********************************************************
// Treasure* takePlayerTreasure()
//
// if the Treasure vector is not empty,
//  1) get the last Treasure in the vector
//  2) remove one player treasure from vector
//  3) take away player treasure points
//  4) return pointer to treasure taken from player
//
// returns pointer to treasure taken or nullptr
//***********************************************************
Treasure* Player::takePlayerTreasure()
{
    if (m_pTreasure.size() == 0)
        return nullptr;

    Treasure* pT = m_pTreasure.back();
    // remove treasure from vector
    m_pTreasure.pop_back();

    // update player points
    m_points -= pT->getTreasurePoints();

    return pT;
    
}

int Player::addPlayerWeapon(Weapon* pB)
{
    m_pWeapon.push_back(pB);
    return m_pWeapon.size();
}

int Player::addLife(MagicWord Life)
{
   
   lifetime = lifetime + 1; 
   return lifetime;
}
int Player::getLifetime()
{
    return lifetime;
}