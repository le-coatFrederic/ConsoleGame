#ifndef EFFECT
#define EFFECT

typedef enum effect {
    poison
}effect;

typedef enum effectOnArmor {
    resistance,
    fireResistance,
    ligthness,
    heaviness
}effectOnArmor;

typedef struct effectLvl {
    effect ef;
    int effectLvl;
}effectLvl;

typedef struct effectOnArmorLvl {
    effectOnArmor ef;
    int effectLvl;
}effectOnArmorLvl;

#endif