//Raceb.cpp
#include <iostream>
#include "Raceb.h"

//get the length of the race and number of horses, assign horses to array h 
Race::Race(){
    getLength();
    getHorses();
    for(int i = 0; i < horses; i++){
        h[i] = Horse();
    }
} //end contructor

void Race::start(){
    //print initial tracks for all horses
    int j;
    for(j = 0; j < horses; j++){
        Race::printLane(j);
    }

    bool keepGoing = true;
    //loop till any of the horses wins the race
    while(keepGoing){
        std::cout << "" << std::endl;
        std::cout << "Press enter for another turn: ";
        //wait for the enter key to press
        char temp = 'x';
        while (temp != '\n')
            std::cin.get(temp);
        //give each horse a chance to advance and print tracks
        int k;
        for(k = 0; k < horses; k++){
            h[k].advance();
            if(h[k].getPosition() == length){
                keepGoing = false;
            }
            Race::printLane(k);
        }
    }
} //end start

//print track for the horses
void Race::printLane(int horseNum){
    int l;
    for(l = 1; l < length; l++){
        if(l == h[horseNum].getPosition()){
            std::cout << horseNum;
        }
        else{
            std::cout << ".";
        }
    }
    std::cout << "." << std::endl;
 
    //decides the final winner
    if(h[horseNum].getPosition() == length){
        std::cout << "Horse " << horseNum << " wins!" << std::endl;
    }
} //end printTrack

//number of horses for the race
void Race::getHorses(){
    horses = 0;
    while(horses < 2 || horses > 25){
        std::cout << "How many horses should participate in this race? (2-25): ";
        std::cin >> horses;
        std::cin.ignore();
    }
}//end getHorses

//track length
void Race::getLength(){
    length = 0;
    while(length < 2 || length > 100){
        std::cout << "How long should the race track be? (2-100): ";
        std::cin >> length;
        std::cin.ignore();
    }
} //end getLength
