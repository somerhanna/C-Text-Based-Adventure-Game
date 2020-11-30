/******************************************************************************
* Treasure.cpp
*
* Treasure class definition
* CS 281-0798, Fall 2020
*
* 
*
*******************************************************************************
*/
#include <string>

#include "Treasure.h"

//***********************************************************
// Treasure(string& tName)
//
// overload constructor
// lrc changed for Week 6
//      tName is now a call by value parameter
//      to allow Treasure("# treasure name") call
//      (see Treasure() below)
//***********************************************************
Treasure::Treasure(std::string tName)
{
    m_name = tName;
    m_treasureText = "#TODO treasure text";
    m_id = -1;
    m_points = 0;
    m_roomNow = 0;
    m_playerNow = 0;
}

//***********************************************************
// Treasure()
//
// constructor
//***********************************************************
Treasure::Treasure() : Treasure("#TODO treasure name") {}

//***********************************************************
// bool setTreasureName()
//***********************************************************
bool Treasure::setTreasureName(std::string& tName)
{
    m_name = tName;
    return true;
}

//***********************************************************
// bool getTreasureName()
//***********************************************************
bool Treasure::getTreasureName(std::string& tName) const
{
    tName = m_name;
    return true;
}

//***********************************************************
// bool setTreasurePoints(int tPoints)
//***********************************************************
bool Treasure::setTreasurePoints(int tPoints)
{
    m_points = tPoints;
    return true;
}

//***********************************************************
// int getTreasurePoints() const
//***********************************************************
int Treasure::getTreasurePoints() const
{
    return m_points;
}

//***********************************************************
// bool setTreasureText(tText)
//***********************************************************
bool Treasure::setTreasureText(std::string& tText)
{
    m_treasureText = tText;
    return true;
}

//***********************************************************
// bool getTreasureText(tText)
//***********************************************************
bool Treasure::getTreasureText(std::string& tText) const
{
    tText = m_treasureText;
    return true;
}