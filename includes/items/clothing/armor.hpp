#ifndef ARMOR
#define ARMOR

#include "../effect.hpp"
#include "../items.hpp"
#include "position.hpp"
#include <string>
#include <vector>

class Armor : public UsabledItem {
protected:
    int bluntDefense;
    int cuttingDefense;
    position pos;
    std::vector<effectOnArmorLvl> effects;
public:
    int getBluntDefense();
    int getCuttingDefense();
    int getPosition();
    std::string getPositionName();
    std::vector<effectOnArmorLvl> getEffects();
};

#endif