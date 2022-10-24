#include "../../includes/items/items.hpp"
#include <new>

int Item::getId() {
    return this->id;
}

std::string Item::getName() {
    return this->name;
}

int UsabledItem::getDurability() {
    return this->durability;
}

void UsabledItem::useItem(int e) {
    if (durability <= 0)
        return;
    this->durability -= e;
    if (e <= 0)
        this->durability = 0;
}
