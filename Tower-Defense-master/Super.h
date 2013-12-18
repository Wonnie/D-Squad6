#ifndef SUPER_H 
#define SUPER_H 

#include "Tower.h"

class Super : public Tower {        // inherits from  Tower base class

public:
    Super(int placeX, int placeY);  // Constructor takes x and y position for the tower
    void fire(Enemy *);     // inflicts enemies with damage based on their type

};


#endif // SUPER_H
