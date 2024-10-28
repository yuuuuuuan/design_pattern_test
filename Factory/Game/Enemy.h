#ifndef ENEMY_H
#define ENEMY_H

#include "GameObject.h"

class Enemy : public GameObject {
public:
    void render() override {
        std::cout << "Rendering Enemy!" << std::endl;
    }
};

#endif // ENEMY_H
