/* Player.h
*
* Player class declaration
* CS 281-0798, Fall 2020
*
* 
*
* Students' code must compile and build with this file.
* Don't edit this file.
*
*******************************************************************************
*/
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#include "Treasure.h"
#include "Weapon.h"
#include "MagicWord.h"

class Player
{
private:
    std::string m_name;                   // user supplied name
    int m_points;                         // accumulated points
    // code hooks for multiplayer mode
    int m_playerId;
    // code hooks for game management
    int m_roomIdNow;                      // player now occupies this room
    int m_roomVisits;                     // how many rooms visited
    std::vector<Treasure*> m_pTreasure;   // accumulated Treasure
    std::vector<Weapon*> m_pWeapon;
    int lifetime = 1;
public:
    Player();
    Player(std::string name);
    // players will persist for app lifetime
    // so destructor not needed
    //~Player();
    int getLifetime();
    bool setPlayerName(std::string& playerName);
    bool getPlayerName(std::string& str) const;

    // code hooks for multiplayer support
    // bool setPlayerId(int id);
    //int getPlayerId() const;

    // code hooks for game management
    //bool setRoomIdNow(int roomId);
    //int getRoomIdNow() const;
 
    // Player points support
    int addPoints(int points);
    bool setPoints(int points);
    int getPoints() const;
    int addLife(MagicWord Life); 

    // Player room visit tracking support
    int incrementRoomVisits();
    bool setRoomVisits(int visits);
    int getRoomVisits() const;

    // Player Treasure management support
    Treasure* takePlayerTreasure();
    int addPlayerTreasure(Treasure* pT);
    int getPlayerTreasureInfo(std::vector<Treasure*>& tVector) const;
    
    Weapon* TakePlayerWeapon();
    int addPlayerWeapon(Weapon* pB);
};

#endif