/******************************************************************************
* Bogie.h
*
* Player class declaration
* CS 281-0798, Fall 2020
*
* Student: Somer Hanna
*
*******************************************************************************/
#ifndef BOGIE_H
#define BOGIE_H
#include <iostream>
using namespace std;

class Bogie
{
       private:
    
        int AttackPoints;
        int myHealth;
        int myPower;
        std::string BogieText;
    public:
        Bogie();
        Bogie(std::string bName);
        int getPower();
        int getHealth();
        int getAttackPoints();
        bool setBogieText(std::string t);
        std::string getBogieText();
        
        bool followPlayer(int t);
        bool destroyPlayer();
        bool EnterRoom();
        bool ExtitRoom();
 
};

#endif