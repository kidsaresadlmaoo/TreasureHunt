#include <iostream>
#include<array>
#include "fuctions.h"

int main()
{
    std::cout << "Welcome in the treasure hunt! :3 \n";
    std::array<char, kRowSize * kColSize> map;
    
    map.fill('x');

    int Treasureidx = (std::rand() % 9);
    map[Treasureidx] = '$';
    ShowMap(map);

    char Xplayer = (std::rand() % 9);
    int Yplayer = (std::rand() % 9);

    std::cout << "Choose coordinates : \n";

    std::cin >> Xplayer;
    std::cin >> Yplayer;

    int Playeridx = ConvertThing(Xplayer, Yplayer);

    //std::cout << Playeridx << std::endl; 

    if (Playeridx == Treasureidx)
    {
        std::cout << "You win\n";
    }
    else
    { 
        std::cout << "You lost\n";
    }
}
/* cant find the porblem with the randomizer treasure, cant hide the treasure to the player
*/
/* gamebasic();*/
