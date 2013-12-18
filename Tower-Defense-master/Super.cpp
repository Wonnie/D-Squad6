#include"Super.h"
#include"Tower.h"
#include "Enemy.h"

using namespace std;

Super::Super(int posX, int posY) : Tower(posX,posY){// basic quick tower constructor
    // intialize values
    setFiringRate(7);
    setRange(7);
    setPower(7);
    setType('s');
}

void Super::fire(Enemy * target) { // fire function for quick tower
    target->takeDamage(this->getPower(), this->getType());
}
