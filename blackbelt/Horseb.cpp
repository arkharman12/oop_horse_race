
//Horseb.cpp
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Horseb.h"

//give each horse random chance of advancement
Horse::Horse(){
    position = 1;
    randNumber1 = rand() % 40 + 41;
    randNumber1 = randNumber1 / 100;
} //end constructor

//decides if the horse can advance to next position
void Horse::advance(){
    int randNumber = rand() % 10;
    result = randNumber * randNumber1;
    if(result >= 2.5){
        position++;
    }
}//end advance

//return the horse's chances of advancement
double Horse::getResult(){
    return randNumber1;
}//end getResult

//return the horse's current postion
int Horse::getPosition(){
    return position;
}//end getPosition
