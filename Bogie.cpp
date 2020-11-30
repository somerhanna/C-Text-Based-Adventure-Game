/******************************************************************************
* Bogie.cpp
*
* Player class declaration
* CS 281-0798, Fall 2020
*
* Student: Somer Hanna
*
*******************************************************************************/
   
#include "Bogie.h"
#include <iostream>
  using namespace std;

 
Bogie::Bogie ()
{
};


Bogie::Bogie (std::string bogie_T) 
{
  
bogie_T = BogieText;

 
}


 
bool Bogie::setBogieText (std::string t) 
{
  
t = BogieText;

}


 
std::string Bogie::getBogieText () 
{
  
std::cout << BogieText << std::endl;
  
return BogieText;

}


int
Bogie::getPower () 
{
  
myPower = rand () % 1009999;
  
return myPower;

}


int
Bogie::getHealth () 
{
  
return myHealth;

}


int
Bogie::getAttackPoints () 
{
  
return AttackPoints * 2;

}


