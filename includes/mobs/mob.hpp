#ifndef MOB
#define MOB

#include <vector>
#include <string>
#include "../items/effect.hpp"

typedef enum typeMob {
    player,
    pnj,
    dog
}typeMob;

class Mob {
protected:
    typeMob type;
    std::string name;
    int hp;
    int maxHp;
    std::vector<effectLvl> effects;
public:
    Mob(typeMob type, std::string name, int maxHp);
    typeMob getType();
    std::string getTypeName();
    std::string getName();
    int getHp();
    int getMaxHp();
    std::vector<effectLvl> getEffects();
};

#endif