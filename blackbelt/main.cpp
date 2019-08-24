//main.cpp
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Raceb.h"

int main(){
    std::cout << "\nWelcome to the racetrack!\n" << std::endl;
    srand(time(NULL));

    //start the race
    Race x = Race();
    x.start();

    return(0);
} //end main
