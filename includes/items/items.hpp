#ifndef ITEM
#define ITEM

#include <string>

class Item {
protected:
    int id;
    std::string name;
public:
    int getId();
    std::string getName();
};

class UsabledItem : public Item {
protected:
    int durability;
public:
    int getDurability();
    virtual int useItem();
};

#endif