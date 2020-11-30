/******************************************************************************
* app_init_rooms.cpp
*
* Test driver
* CS 281 - 0798, Fall 2020
*
* 
*
* room initialization functions
*******************************************************************************
*/
#include "Room.h"
Room *pRoom = new Room ();
Room *pRoom2 = new Room ();
Room *pRoom3 = new Room ();
Room *pRoom4 = new Room ();
Room *pRoom5 = new Room ();
Room *pRoom6 = new Room ();





/******************************************************************************
* Room* initNexus()
*******************************************************************************
*/
Room *
initNexus ()
{
  // create a room instance and customize it as the Nexus
//    Room* pRoom = new Room();

  // set room point value
  pRoom->setRoomPoints (100);

  std::string str = "the Nexus";
  pRoom->setRoomName (str);

  str = "You are in the Nexus";
  pRoom->setEntryText (str);

  str = "You are leaving the Nexus";
  pRoom->setExitText (str);

  str = "Lake Houdini to the north";
  pRoom->setRoomDirectionText (ROOM_NORTH, str);

  str = "Nexus Silicon Desert to the south";
  pRoom->setRoomDirectionText (ROOM_SOUTH, str);

  str = "Bay of Lune to the east";
  pRoom->setRoomDirectionText (ROOM_EAST, str);

  str = "Magic Mountains to the west";
  pRoom->setRoomDirectionText (ROOM_WEST, str);

  str = "Blue skies above";
  pRoom->setRoomDirectionText (ROOM_UP, str);

  str = "A carpet of wildflowers below";
  pRoom->setRoomDirectionText (ROOM_DOWN, str);
  pRoom->setRoomDirectionPtr (ROOM_DOWN, pRoom2);


  return pRoom;
}

/******************************************************************************
* Room* initRoom2()
*******************************************************************************
*/
Room *
initRoom2 ()
{
  // create a room instance and customize it as Room2
//    Room* pRoom2 = new Room();

  // set room point value
  pRoom2->setRoomPoints (150);

  std::string str = "the dreaded Room2";
  pRoom2->setRoomName (str);

  str = "You are in the dreaded Room2";
  pRoom2->setEntryText (str);

  str = "You are leaving the dreaded Room2";
  pRoom2->setExitText (str);

  str = "Dreaded Room2 Too hazy to see to the north";
  pRoom2->setRoomDirectionText (ROOM_NORTH, str);

  str = "Coco Tar Pit to the south";
  pRoom2->setRoomDirectionText (ROOM_SOUTH, str);

  str = "Moonscape Isle to the east";
  pRoom2->setRoomDirectionText (ROOM_EAST, str);

  str = "Swampy Marsh to the west";
  pRoom2->setRoomDirectionText (ROOM_WEST, str);

  str = "Smoggy skies above";
  pRoom2->setRoomDirectionText (ROOM_UP, str);

  str = "Bare ground below";
  pRoom2->setRoomDirectionText (ROOM_DOWN, str);

  // #TODO set one of the room map direction pointers
  // to point 



  return pRoom2;
}

/******************************************************************************
* Room* initRoom3()
*******************************************************************************
*/
Room *
initRoom3 ()
{
  // create a room instance and customize it as Room3
//    Room* pRoom3 = new Room();

  // set room point value
  pRoom3->setRoomPoints (150);

  std::string str = "Coronado Bridge Room3";
  pRoom3->setRoomName (str);

  str = "You are in Coronado Bridge Room3";
  pRoom3->setEntryText (str);

  str = "You are leaving Coronado Bridge Room3";
  pRoom3->setExitText (str);

  str = "Too hazy to see to the north";
  pRoom3->setRoomDirectionText (ROOM_NORTH, str);

  str = "Coco Tar Pit to the south";
  pRoom3->setRoomDirectionText (ROOM_SOUTH, str);

  str = "Moonscape Isle to the east";
  pRoom3->setRoomDirectionText (ROOM_EAST, str);

  str = "Swampy Marsh to the west";
  pRoom3->setRoomDirectionText (ROOM_WEST, str);

  str = "Smoggy skies above";
  pRoom3->setRoomDirectionText (ROOM_UP, str);

  str = "Bare ground below";
  pRoom3->setRoomDirectionText (ROOM_DOWN, str);

  // #TODO set one of the room map direction pointers
  // to point 

  return pRoom3;
}

/******************************************************************************
* Room* initRoom4()
*******************************************************************************
*/
Room *
initRoom4 ()
{
  // create a room instance and customize it as Room4
  //  Room* pRoom4 = new Room();

  // set room point value
  pRoom4->setRoomPoints (400);

  std::string str = "Taco shop Room4";
  pRoom4->setRoomName (str);

  str = "You are in Taco shop Room4";
  pRoom4->setEntryText (str);

  str = "You are leaving Taco shop Room4";
  pRoom4->setExitText (str);

  str = "Too hazy to see to the north Taco shop Room4";
  pRoom4->setRoomDirectionText (ROOM_NORTH, str);

  str = "Coco Tar Pit to the south Taco shop Room4";
  pRoom4->setRoomDirectionText (ROOM_SOUTH, str);

  str = "Moonscape Isle to the east Taco shop Room4";
  pRoom4->setRoomDirectionText (ROOM_EAST, str);

  str = "Swampy Marsh to the west Taco shop Room4";
  pRoom4->setRoomDirectionText (ROOM_WEST, str);

  str = "Smoggy skies above Taco shop Room4";
  pRoom4->setRoomDirectionText (ROOM_UP, str);

  str = "Bare ground below Taco shop Room4";
  pRoom4->setRoomDirectionText (ROOM_DOWN, str);

  // #TODO set one of the room map direction pointers
  // to point 

  return pRoom4;
}

/******************************************************************************
* Room* initRoom5()
*******************************************************************************
*/
Room *
initRoom5 ()
{
  // create a room instance and customize it as Room5
  //   Room* pRoom5 = new Room();

  // set room point value
  pRoom5->setRoomPoints (500);

  std::string str = "Spaceship Room5";
  pRoom5->setRoomName (str);

  str = "You are in Spaceship Room5";
  pRoom5->setEntryText (str);

  str = "You are leaving Spaceship Room5";
  pRoom5->setExitText (str);

  str = "Too hazy to see to the north Spaceship Room5";
  pRoom5->setRoomDirectionText (ROOM_NORTH, str);

  str = "Coco Tar Pit to the south Spaceship Room5";
  pRoom5->setRoomDirectionText (ROOM_SOUTH, str);

  str = "Moonscape Isle to the east Spaceship Room5";
  pRoom5->setRoomDirectionText (ROOM_EAST, str);

  str = "Swampy Marsh to the west Spaceship Room5";
  pRoom5->setRoomDirectionText (ROOM_WEST, str);

  str = "Smoggy skies above Spaceship Room5";
  pRoom5->setRoomDirectionText (ROOM_UP, str);

  str = "Bare ground below Spaceship Room5";
  pRoom5->setRoomDirectionText (ROOM_DOWN, str);

  // #TODO set one of the room map direction pointers
  // to point 

  return pRoom5;
}

/******************************************************************************
* Room* initRoom6()
*******************************************************************************
*/
Room *
initRoom6 ()
{
  // create a room instance and customize it as Room5
  //   Room* pRoom6 = new Room();

  // set room point value
  pRoom6->setRoomPoints (600);

  std::string str = "Music Room6";
  pRoom6->setRoomName (str);

  str = "You are in Music Room6";
  pRoom6->setEntryText (str);

  str = "You are leaving Music Room6";
  pRoom6->setExitText (str);

  str = "Too hazy to see to the north of Music Room6";
  pRoom6->setRoomDirectionText (ROOM_NORTH, str);

  str = "Coco Tar Pit to the south Music Room6 ";
  pRoom6->setRoomDirectionText (ROOM_SOUTH, str);

  str = "Moonscape Isle to the east Music Room6";
  pRoom6->setRoomDirectionText (ROOM_EAST, str);

  str = "Swampy Marsh to the west Music Room6";
  pRoom6->setRoomDirectionText (ROOM_WEST, str);

  str = "Smoggy skies above Music Room6 ";
  pRoom6->setRoomDirectionText (ROOM_UP, str);

  str = "Bare ground below Music Room6";
  pRoom6->setRoomDirectionText (ROOM_DOWN, str);

  // #TODO set one of the room map direction pointers
  // to point 

  return pRoom6;
}
