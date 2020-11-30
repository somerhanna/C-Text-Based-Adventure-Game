/******************************************************************************
* MagicWord.h
* Student Name: Somer Hanna
********************************************************************************/
#ifndef MAGICWORD_H
#define MAGICWORD_H
#include <iostream>
#include <string>
#include "Word.h"

enum words {Power, Light, Life };

class MagicWord
{

public:
    MagicWord();
    MagicWord(std::string tName);
    
    bool setMagicWord(std::string st);
    std::string getMagicWord(std::string tName);
    
        MagicWord(const words& v) : value{v} {} 
        operator words() const { return value; }
        MagicWord& operator=(words v) { value = v; return *this;}
        bool operator==(const words v) const { return value == v; }
        bool operator!=(const words v) const { return value != v; }
        operator std::string() const;
   
    
  private:
    words value;
    std::string m_name;
    
};


#endif