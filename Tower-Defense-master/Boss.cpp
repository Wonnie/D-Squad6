#include "Enemy.h"
#include "Boss.h"
#include <cmath>

using namespace std;

Boss::Boss(int startX, int startY, int wave) : Enemy(startX, startY) { 
    initHealth(30*pow(1.5,wave-1));            
    initSpeed(18);
    initType('o');
    initValue(60*((wave+3)/3));
}


void Boss::takeDamage(int unchangedDamage, char type) { 

    if(type == 'b'){ 
        loseHealth(unchangedDamage/10); 
    }
    else if(type == 'q') { // if tower is quick
        loseHealth(unchangedDamage/10); //takes a quarter of "quick" damage

    }
    else if(type == 'f') { // if tower is double
        loseHealth(unchangedDamage/10); //takes DOUBLE fire damage
    }
    else if(type == 's') { // if tower is double
        loseHealth(unchangedDamage*10); 
    }
    else {
        loseHealth(unchangedDamage); //normal damage otherwise
    }
}
