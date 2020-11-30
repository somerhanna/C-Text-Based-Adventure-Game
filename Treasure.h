/******************************************************************************
* Treasure.h
* 
* Treasure class declaration
* CS 281-0798, Fall 2020
*
* 
*
*******************************************************************************
*/
#ifndef TREASURE_H
#define TREASURE_H

#include <string>

class Treasure
{
private:
    std::string m_name;
    std::string m_treasureText;
    int m_id;
    int m_points;
    int m_roomNow;
    int m_playerNow;

public:
    Treasure();
    Treasure(std::string tName);
    // treasure persists for app lifetime
    // so destructor not needed
    //~Treasure();

    bool setTreasureId(int tId);
    int getTreasureId() const;

    bool setTreasureName(std::string& tName);
    bool getTreasureName(std::string& tName) const;

    bool setTreasurePoints(int tPoints);
    int getTreasurePoints() const;

    bool setTreasureText(std::string& tText);
    bool getTreasureText(std::string& tText) const;

    bool setTreasureRoomNow(int tRoom);
    int getTreasureRoomNow();

    bool setPlayerNow(int tPlayer);
    int getPlayerNow();
};

#endif
