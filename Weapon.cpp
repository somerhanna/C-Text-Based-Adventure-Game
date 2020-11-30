/******************************************************************************
* Weapon.cpp
*
* 
*
*******************************************************************************
*/
#include <string>

#include "Weapon.h"

Weapon::Weapon(int id, std::string tName)
{
    Weapon_ID = id;
    name = "default Golden sord";
    
}

//***********************************************************
// Weapon()
//
// constructor
//***********************************************************
Weapon::Weapon() {}

//***********************************************************
// bool setWeaponName()
//***********************************************************
bool Weapon::setWeaponName(std::string tName)
{
    name = tName;
    
    return true;
}

//***********************************************************
// bool getWeaponName()
//***********************************************************
std::string Weapon::getWeaponName(std::string& tName) 
{
    tName = name;
    std::cout << "Weapon: " << name << std::endl;
    return tName;
}

//***********************************************************
// bool setWeaponID(int wID)
//***********************************************************
int Weapon::setWeaponID(int wID)
{
    Weapon_ID = wID;
    return true;
}

//***********************************************************
// int getWeaponID() const
//***********************************************************
int Weapon::getWeaponID()
{
    return Weapon_ID;
}

int Weapon::WeaponPower()
{
    Power = rand() % 1009999; 
    return Power;
}

int Weapon::morePower(MagicWord morePower){
   //giving the user more Weapon powers
    
    Power = rand() % 1009999; 
    return Power;
}