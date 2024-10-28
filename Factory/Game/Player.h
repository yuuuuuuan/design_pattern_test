#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject.h"

class Player : public GameObject {
public:
    void render() override {
        std::cout << "Rendering Player!" << std::endl;
    }
};

#endif // PLAYER_H
