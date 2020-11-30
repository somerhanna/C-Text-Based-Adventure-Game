/******************************************************************************
* Word.h
*
* Student Name: Somer Hanna
*
*
*******************************************************************************/
#ifndef WORD_H
#define WORD_H
#include <iostream>
#include <string>

class Word
{
    std::string m_name;
    
public:
    Word();
    bool setWord(std::string& tName);
    bool getWord(std::string& tName) const;

};  
   
#endif