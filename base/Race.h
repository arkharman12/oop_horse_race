
//Race.h
#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS
#include "Horse.h"

class Race{
    private:
        Horse h[5];
    public:
        int length;
        Race();
        Race(int length);
        void printLane(int horseNum);
        void start();
};

#endif
