/******************************************************************************
* Weapon.h
*
* Room class definition
* CS 281-0798, Fall 2020
* Student Name: Somer Hanna
*
* 
*
*******************************************************************************/
#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>
#include "Treasure.h"
#include "MagicWord.h"

// Weapon Class is derived from Treasure class
// Weapon contractor inlcude weapon name, weapon commands, weapon points, added also impact and accuracy
class Weapon: public Treasure
{
public:

  Weapon();
  Weapon(int weapon_id, std::string weapon_name);
  bool setWeaponName(std::string str);
  std::string getWeaponName(std::string& tName);
  int setWeaponID(int _wip);
  int getWeaponID();
  int WeaponPower();
  int morePower(MagicWord morePower);
  
 
 private:
    std::string name;
    int Weapon_ID;
    
    int Power; 
};
    /*
    Weapon() : 
        weaponName("Unknown"), 
        Command("Unknown"), 
        Impact(0),
        Accuracy(0),
        weaponPoints_(0)
    {        
    }

    std::string Name() const { return weaponName; }
    std::string Verb() const { return Command; }
    int Damage() const { return Impact; }
    int Accuracy() const { return Accuracy; }
    int FireRate() const { return weaponPoints; }

private:
    std::string weaponName;
    std::string Command;
    int Impact;
    int Accuracy;
    int weaponPoints;
};

*/
#endif