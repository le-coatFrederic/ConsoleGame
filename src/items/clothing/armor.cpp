#include "../../../includes/items/clothing/armor.hpp"
#include "../../../includes/items/items.hpp"

int Armor::getBluntDefense() {
    return this->bluntDefense;
}

int Armor::getCuttingDefense() {
    return this->cuttingDefense;
}

int Armor::getPosition() {
    return this->pos;
}

std::string Armor::getPositionName() {
    switch (this->pos) {
    case helmet :
        return "Helmet";
    case cap :
        return "Cap";
    case necklace :
        return "Necklace";
    case mask :
        return "Mask";
    case bracelet :
        return "Bracelet";
    case ring :
        return "Ring";
    case gloves :
        return "Gloves";
    case jersey :
        return "Jersey";
    case coat :
        return "Coat";
    case pants :
        return "Pants";
    case cape :
        return "Cape";
    case boots :
        return "Boots";
    }
}

std::vector<effectOnArmorLvl> Armor::getEffects() {
    return this->effects;
}

int Armor::useItem() {

}