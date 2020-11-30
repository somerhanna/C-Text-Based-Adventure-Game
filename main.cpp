/******************************************************************************
*main.cpp
*
* Test driver
* CS 281 - 0798, Fall 2020
*
*
*
* test driver main, evolution to app main underway
*******************************************************************************
*/
#include <iostream>

#include "Room.h"
#include "Treasure.h"
#include "Player.h"
#include "Weapon.h"
#include "Bogie.h"
#include "MagicWord.h"
#include "Word.h"


// local function prototypes
bool grabTreasure(Player* pPlayer, Room* pRoom, std::string& str);
bool TakeWeapon(Player* pPlayer, Room* pRoom, std::string& str);

bool dropTreasure(Player* pPlayer, Room* pRoom, std::string& str);
bool lookAllDirections(Room* pRoom, std::string& str);

// global variables
static Room* g_pNexus = nullptr;
static Room* g_pRoom2 = nullptr;
static Room* g_pRoom3 = nullptr;
static Room* g_pRoom4 = nullptr;
static Room* g_pRoom5 = nullptr;
static Room* g_pRoom6 = nullptr;

/******************************************************************************
* int main()
* entry point
*******************************************************************************
*/
int main()
{
    // set all-purpose string and message buffer to default
    std::string str = "Default Value";
    std::string strp1 = "Life Jaclet";
    std::string strp2 = "Life Support";
    std::string strp3 = "Golden Book";
    std::string strp4 = "Flash Light";
    std::string strp5 = "Safe Box";
    std::string strp6 = "Silver coins";
    std::string wstr1 = "Silver sord";
    std::string wstr2 = "Golen sord";
    std::string bstr1= "Heeyyyaaaha";
    std::string mg = "Power"; // Default value for Weapon Power
    
    Room* initNexus();
    Room* initRoom2();
    Room* initRoom3();
    Room* initRoom4();
    Room* initRoom5();
    Room* initRoom6();
        
    // #TODO for Week 7: initialize rooms in these functions
    g_pNexus = initNexus();
    g_pRoom2 = initRoom2();
    g_pRoom3 = initRoom3();
    g_pRoom4 = initRoom4();
    g_pRoom5 = initRoom5();
    g_pRoom6 = initRoom6();
   

    // #TODO for Week 7: set the room map initialization pointers
     g_pNexus->setRoomDirectionPtr(ROOM_SOUTH, g_pRoom2);
     g_pRoom2->setRoomDirectionPtr(ROOM_NORTH, g_pRoom3);
     g_pRoom3->setRoomDirectionPtr(ROOM_EAST, g_pRoom4);
     g_pRoom4->setRoomDirectionPtr(ROOM_WEST, g_pRoom5);
     g_pRoom5->setRoomDirectionPtr(ROOM_UP, g_pRoom6);
     g_pRoom6->setRoomDirectionPtr(ROOM_DOWN, g_pNexus);

    // rooms init done

    // #TODO put player in starting room of your choice
    Room* pRoom = g_pNexus;
    MagicWord command;

    // display current room name
    pRoom->getRoomName(str);
    std::cout << "You're in " << str << std::endl;

    // #TODO customize your Treasure
    // create and initialize Treasure instance
    Treasure* pTreasure = new Treasure();
    str = "Life Jacket";
    pTreasure->setTreasureName(str);
    pTreasure->setTreasurePoints(7000);
    // initialize Bogie 
    
    Bogie* pBogie = new Bogie();
    pBogie->setBogieText(bstr1);

    // install Treasure pointer in Room's Treasure vector
    // create Player instance and award room points
    Player* pPlayer = new(Player);
    int points = pRoom->getRoomPoints();
    pPlayer->addPoints(points);
    pPlayer->addPlayerTreasure(pTreasure);  // Nov 15
    
    // display message for room points awarded
    pRoom->getRoomName(str);
    std::cout << points << " room points for "
        << str << "!" << std::endl;
        
    // Set Weapon
    Weapon* pWeapon = new(Weapon);
    pWeapon->setWeaponName(wstr1);

    // display message if treasure is available here
    if (pRoom->getRoomTreasureCount() > 0)
    {
        std::cout << "There is treasure here..\n";
    }

    // direction command from user
    char chDirection = 0;

    // play the game!
    do
    {
        // display game menu
        std::cout << std::endl;
        
        std::cout << "n)orth, s)outh, e)ast, w)est, u)p, l)ook, g)et, dR)op, deF)end, T)ake,\n"; 
        std::cout << "d)own, m)agic word, q)uit ? \n";
        std::cin >> chDirection;

        // forcing to lower case simplifies switch cases
        chDirection = tolower(chDirection);

        // preset messag buffer text
        str = "";

        switch (chDirection)
        {
        case 'q':
            // handle q)uit 
            str = "Leaving so soon?";
            break;
        case 'n':
            // handle n)orth
            // lrc sample direction command handling for Week 7
            // display "you are leaving" current room
            std::cout << "You are leaving current room: ";
            pRoom->getExitText(str);
            pRoom->setRoomDirectionPtr(ROOM_NORTH, g_pRoom2);
            g_pRoom2->getRoomDirectionText(ROOM_NORTH, str);
            g_pRoom2->getRoomDirectionPtr(ROOM_NORTH);
            g_pRoom2->getEntryText(str);
            pPlayer->incrementRoomVisits();
            std::cout << "Total Room visited: " << pPlayer->getRoomVisits();
            std::cout << "\nYour points: " << pPlayer->getPoints() ;
            
            pTreasure->setTreasureName(strp1);
            pTreasure->setTreasurePoints(500);
            pRoom->addRoomTreasure(pTreasure);
            pPlayer->addPlayerTreasure(pTreasure);
       
            break;
        case 's':
            // handle s)outh 
            pRoom->setRoomDirectionPtr(ROOM_SOUTH, g_pRoom3);
            g_pRoom3->getRoomDirectionText(ROOM_SOUTH, str);
            g_pRoom3->getRoomDirectionPtr(ROOM_SOUTH);
            g_pRoom3->getEntryText(str);
            pPlayer->incrementRoomVisits();
             pPlayer->incrementRoomVisits();
            std::cout << "Total Room visited: " << pPlayer->getRoomVisits();
            std::cout << "\nYour points: " << pPlayer->getPoints() ;
            
            pTreasure->setTreasureName(strp2);
            pTreasure->setTreasurePoints(200);
            pRoom->addRoomTreasure(pTreasure);
            pPlayer->addPlayerTreasure(pTreasure);
            pWeapon->setWeaponName(wstr1); 
            break;
        case 'e':
            // handle e)ast 
            
           
            pRoom->setRoomDirectionPtr(ROOM_EAST, g_pRoom4);
            g_pRoom4->getRoomDirectionText(ROOM_EAST, str);
            g_pRoom4->getRoomDirectionPtr(ROOM_EAST);
            std::cout << " you are entering room: " ;
            g_pRoom4->getEntryText(str);
            pPlayer->incrementRoomVisits();
            std::cout << "Total Room visited: " << pPlayer->getRoomVisits();
              pTreasure->setTreasureName(strp3);
            pTreasure->setTreasurePoints(333);
            pRoom->addRoomTreasure(pTreasure);
            pPlayer->addPlayerTreasure(pTreasure);
            break;
        case 'w':
            // handle w)est 
            pRoom->getExitText(str);
            pRoom->setRoomDirectionPtr(ROOM_WEST, g_pRoom5);
            g_pRoom5->setRoomDirectionText(ROOM_WEST, str);
            g_pRoom5->getRoomDirectionPtr(ROOM_WEST);
            g_pRoom5->getEntryText(str);
            pPlayer->incrementRoomVisits();
            std::cout << "Total Room visited: " << pPlayer->getRoomVisits();
              pTreasure->setTreasureName(strp4);
            pTreasure->setTreasurePoints(4444444);
            pRoom->addRoomTreasure(pTreasure);
            pPlayer->addPlayerTreasure(pTreasure);
            break;
        case 'u':
            // handle u)p 
            pRoom->getExitText(str);
            pRoom->setRoomDirectionPtr(ROOM_UP, g_pRoom6);
            g_pRoom6->getRoomDirectionText(ROOM_UP, str);
            g_pRoom6->getRoomDirectionPtr(ROOM_UP);
            g_pRoom6->getEntryText(str);
            pPlayer->incrementRoomVisits();
            std::cout << "Total Room visited: " << pPlayer->getRoomVisits();
              pTreasure->setTreasureName(strp5);
            pTreasure->setTreasurePoints(5959595);
            pRoom->addRoomTreasure(pTreasure);
            pPlayer->addPlayerTreasure(pTreasure);
            break;
           
        case 'd':
            // handle d)own 
            pRoom->getExitText(str);
            pRoom->setRoomDirectionPtr(ROOM_DOWN, g_pNexus);
            g_pNexus->getRoomDirectionText(ROOM_DOWN, str);
            g_pNexus->getRoomDirectionPtr(ROOM_DOWN);
            g_pNexus->getEntryText(str);
            pPlayer->incrementRoomVisits();
            std::cout << "Total Room visited: " << pPlayer->getRoomVisits();
             pTreasure->setTreasureName(strp6);
            pTreasure->setTreasurePoints(66666666);
            pRoom->addRoomTreasure(pTreasure);
            pPlayer->addPlayerTreasure(pTreasure);
            break;
        case 'f':
            std::cout << "Your weapon: "; 
            pWeapon->getWeaponName(wstr1); 
            std::cout << pBogie->getBogieText();
            std::cout << "Bogie power: " << pBogie->getPower();
            break;
            
        case 'l':
            // handle l)ook
            // seed message buffer for fail case
            str = "there's nothing here";
            // transfer treasure to player and fill str with message
            lookAllDirections(pRoom, str);
            break;
        case 'g':
            // handle g)et
            // seed message buffer for fail case
            str = "there's no treasure here";
            // transfer treasure to player and fill str with message
            grabTreasure(pPlayer, pRoom, str);
            break;
        case 'r':
            // handle dR)op 
            // seed message buffer for fail case
            str = "your pockets are empty!";
            // transfer treasure to room and fill str with message
            dropTreasure(pPlayer, pRoom, str);
            break;
        case 't':
            // handle T)ake weapon
            // take weapon
            TakeWeapon(pPlayer, pRoom, wstr1);
            break;
        case 'm':
            // say the MagicWord Please
              std::cout << "--------------------Say the MagicWord----------------------------\n";
              std::cout << "----You have severl MagicWord that can help you with your game---\n";
              std::cout << "----Select Power for more Weapon Power---------------------------\n";
              std::cout << "----Select Light to get room hidden information------------------\n";
              std::cout << "----Select Life to add life to your player-----------------------\n";
//            std::cout << "-----------------------------------------------------------------\n";
            std::cin >> mg;
            
             if (mg == "Light")
             {
              command.setMagicWord(mg);
              command = Light;
              
              //std::cout << "----------Room hidden information-------------------------\n";
              pRoom->DisplayHiddenData(Light);
             } 
             if (mg == "Life")
             {
             // pPlayer
             command.setMagicWord(mg);
             command = Life;
              std::cout << "\n----Your life time was------\n" << pPlayer->getLifetime();
              std::cout << "\n----You got more life time: ";
              std::cout << pPlayer->addLife(Life) << std::endl;
             }
             
             if (mg == "Power")
             {
              command.setMagicWord(mg);
              command = Power;
              std::cout << "\nYou got more Power! " << pWeapon->morePower(Power) << std::endl;
              
             }
             else 
             {
              std::cout << mg << " not a magic word\n";
              mg = "not a magic word";
             }
           break;  
        default:
            // handle bad input
            str = "Oops! bad input";
        }

        // response to user command
        //std::cout << std::endl << str << std::endl;

        // display message if treasure is available here
        if (pRoom->getRoomTreasureCount() > 0)
        {
            std::cout << "There is treasure here.\n";
        }

    } while (chDirection != 'q');

    // farewell to player
    std::cout << std::endl << "Goodbye!"
        << std::endl << std::endl;

    system("pause");



   return 0;
}

/******************************************************************************
* bool grabTreasure()
* 
* transfer treasure from room to player
* fill caller's buffer with message string to display
*******************************************************************************
*/
bool grabTreasure(Player* pPlayer, Room* pRoom, std::string& str)
{
    Treasure* pTreasure = pRoom->takeRoomTreasure();

    if (pTreasure == nullptr)
        return false;

    pPlayer->addPlayerTreasure(pTreasure);
    pTreasure->getTreasureName(str);

    // build message string
    str = "you have a " + str;

    // convert points to character string
    int points = pTreasure->getTreasurePoints();
    std::string pointsStr = std::to_string(points);

    str = str + " worth " + pointsStr + " points";

    return true;
}

/******************************************************************************
* bool dropTreasure()
*
* transfer treasure from player to room
* fill caller's buffer with message string to display
*******************************************************************************
*/
bool dropTreasure(Player* pPlayer, Room* pRoom, std::string& str)
{
    Treasure* pTreasure = pPlayer->takePlayerTreasure();

    if (pTreasure == nullptr)
        return false;

    // transfer treasure from player to room
    pRoom->addRoomTreasure(pTreasure);

    // display message
    pTreasure->getTreasureName(str);
    str = "You dropped a " + str;

    return true;
}

/******************************************************************************
* bool lookAllDirections()
*
* display all direction text in current room
*******************************************************************************
*/
bool lookAllDirections(Room* pRoom, std::string& str)
{
    // accumulate message in caller's buffer
    str = "";

    // utility buffer gets stomped every time through loop
    std::string s;

    // add every direction text to caller's buffer
    for (int i = 0; i < ROOM_NDIR; i++)
    {
        pRoom->getRoomDirectionText(i, s);
        str = str + s + "\n";
    }

    return true;
}


/******************************************************************************
* bool TakeWeapon()
* 
* transfer weapon from room to player
* fill caller's buffer with message string to display
*******************************************************************************
*/

bool TakeWeapon(Player* pPlayer, Room* pRoom, std::string& str)
{
    Weapon* pWeapon = pRoom->TakeWeapon();

    if (pWeapon == nullptr)
        return false;

    pPlayer->addPlayerWeapon(pWeapon);
    pWeapon->getWeaponName(str);
    std::string s =  pWeapon->getWeaponName(str);
    std::cout << "Weapon: " << s << std::endl;

    // build message string
    str = "you have a " + str;

    // convert points to character string
    int points = pWeapon->WeaponPower();
    std::string pointsStr = std::to_string(points);

    str = str + " worth " + pointsStr + " points";

    return true;
}
