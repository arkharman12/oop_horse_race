//Raceb.h
#ifndef RACEB_H_EXISTS
#define RACEB_H_EXISTS
#include "Horseb.h"

class Race{
    private:
        int horses;
        Horse h[20];
    public:
        int length;
        Race();
        Race(int length);
        void printLane(int horseNum);
        void start();
        void getHorses();
        void getLength();
};

#endif
