#ifndef DAMAGE
#define DAMAGE

#include "../items/effect.hpp"

typedef struct damage {
    int bluntDamage;
    int cuttingDamage;
    effectLvl *effect;
}damage;

#endif