//Race.cpp
#include <iostream>
#include "Race.h"

void Race::start(){
    //print initial tracks for all horses
    int j;
    for(j = 0; j < 5; j++){
        Race::printLane(j);
    }

    bool keepGoing = true;
    //loop till any of the horses wins the race
    while(keepGoing){
        std::cout << "" << std::endl;
        std::cout << "Press enter to continue: ";
        //wait for the enter key to press
        char temp = 'x';
        while (temp != '\n')
            std::cin.get(temp);
        //give each horse a chance to advance and print tracks
        int k;
        for(k = 0; k < 5; k++){
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
 
    //decides the winner
    if(h[horseNum].getPosition() == length){
        std::cout << "Horse " << horseNum << " wins!" << std::endl;
    }
} //end printTrack

Race::Race(){
    length = 15;
} //end Race

Race::Race(int length){
    Race::length = length;
} //end Race(int length)
