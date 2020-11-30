//*************************************************************
// Student Name: Somer Hanna
//
// Added: MagicWord Homework
//
// Date: Nov 22, 2020
//*************************************************************
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#include "MagicWord.h"

MagicWord::MagicWord()
{
    m_name = "";
    
}
MagicWord::MagicWord(std::string tName)
{
    m_name = tName;
    
}

bool MagicWord::setMagicWord(std::string tName)
{
    m_name = tName;
    return true;
}


std::string MagicWord::getMagicWord(std::string tName) 
{
    tName = m_name;
    return tName;
}
// words {Power, Light, Life}

MagicWord::operator std::string()  const{
        switch (value) {
            case Power: return "Power";
            case Light: return "Light";
            case Life: return "Life";
            
        }
    
}