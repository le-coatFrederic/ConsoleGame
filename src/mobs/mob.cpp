#include "../../includes/mobs/mob.hpp"
#include <cstddef>

Mob::Mob(typeMob type, std::string name, int maxHp) {
    this->type = type;
    this->name = name;
    this->maxHp = maxHp;
    this->hp = this->maxHp;
}

Mob::~Mob() {
    return;
}

typeMob Mob::getType() {
    return this->type;
}

std::string Mob::getTypeName() {
    switch (this->type) {
    case player :
        return "Helmet";
    case pnj :
        return "Cap";
    case dog :
        return "Necklace";
    }
}

std::string Mob::getName() {
    return this->name;
}

int Mob::getHp() {
    return this->hp;
}

int Mob::getMaxHp() {
    return this->maxHp;
}

std::vector<effectLvl> Mob::getEffects() {
    return this->effects;
}


void Mob::attack(Mob *enemy) {
    damage dmg;
    dmg.bluntDamage = 0;
    dmg.cuttingDamage = 0;
    dmg.effect = NULL;
    enemy->receiveAttack(dmg);
}

void Mob::receiveAttack(damage dmg) {

}
