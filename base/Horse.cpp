//Horse.cpp
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Horse.h"

Horse::Horse(){
    position = 1;
    srand(time(NULL));
} //end constructor

//give each horse 50/50 chance of advancement
void Horse::advance(){
    int moveChance = rand()%2;
    if(moveChance == 1){
        position++;
    } //end if

}//end advance

//return the horse's current postion
int Horse::getPosition(){
    return position;
} //end getPosition

