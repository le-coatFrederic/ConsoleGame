#ifndef MOB
#define MOB

#include <vector>
#include <string>
#include "../items/effect.hpp"
#include "damage.hpp"

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
    ~Mob();
    typeMob getType();
    std::string getTypeName();
    std::string getName();
    int getHp();
    int getMaxHp();
    std::vector<effectLvl> getEffects();

    void attack(Mob *enemy);
    void receiveAttack(damage dmg);
};

#endif