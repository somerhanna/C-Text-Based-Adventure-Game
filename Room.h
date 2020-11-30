/******************************************************************************
* Room.h
*
* Room class declaration
* CS 281-0798, Fall 2020
* 
* 
* 
* Students' code must compile and build with this file.
* Don't edit this file.
*
*******************************************************************************
*/

#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <array>
#include <vector>

#include "Treasure.h"
#include "Bogie.h"
#include "Weapon.h"
#include "MagicWord.h"
// direction constants
// use these to exercise Room class!

// number of room directions
#define ROOM_NDIR   6

// each room direction
#define ROOM_NORTH  0
#define ROOM_SOUTH  1
#define ROOM_EAST   2
#define ROOM_WEST   3
#define ROOM_UP     4
#define ROOM_DOWN   5

// class definition error codes

// feature needs implementation
#define ERROR_TODO -1
//------------------------------------------------------------
// Room class
class Room
{

private:
  std::string m_roomName;

  int m_roomId;			// internal use - could build map or ?
  int m_roomPoints;		// for app awarding points to player

  // each string is room text to display for the given direction
    std::string m_roomTextArray[ROOM_NDIR];

  // each Room* gives next room in the given direction
// lrc changed for Week 6
//      fixed incorrect constant - MAX_ROOMS should be ROOM_NDIR
  Room *m_nextRoomPtrArray[ROOM_NDIR];


  // messages for display on player entry and exit
    std::string m_entryText;

    std::string m_exitText;


  // room's treasure vector
    std::vector < Treasure * >m_pTreasure;
  // room's Bogie vector
    std::vector < Bogie * >m_pBogie;
  // room's Weapon vector
    std::vector < Weapon * >m_pWeapon;
   bool lightSwitch = false;
   
public:
    Room ();

// lrc changed for Week 6
//      name is now a call by value string parameter
//      to allow constructor initialization list
    Room (std::string name);

  // rooms will persist for app lifetime
  // so destructor not needed
  //~Room();

  bool setRoomName (std::string & str);
  bool DisplayHiddenData(MagicWord Light);
 
  bool getRoomName (std::string & str) const;


  bool setRoomId (int roomId);

  int getRoomId () const;


  // lrc added for Week 7
  bool setRoomPoints (int points);

  int getRoomPoints () const;


  bool setEntryText (std::string & str);

  bool getEntryText (std::string & str) const;


  bool setExitText (std::string & str);

  bool getExitText (std::string & str) const;


  // assume input is in direction constants - see above 
  bool setRoomDirectionText (int direction, std::string & str);

  bool getRoomDirectionText (int direction, std::string & str) const;


// lrc #TODO implement these two member functions for Week 7
  // assume input is in direction constants - see above 
  bool setRoomDirectionPtr (int direction, Room * pRoom);

  Room *getRoomDirectionPtr (int direction) const;


  int addRoomTreasure (Treasure * pTreasure);

  Treasure *takeRoomTreasure ();
  Bogie *takeBogie ();

  int getRoomTreasureCount () const;
  int addRoomBogie (Bogie * pBogie);
  Weapon *TakeWeapon ();
};



#endif
