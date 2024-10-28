#ifndef GAME_OBJECT_FACTORY_H
#define GAME_OBJECT_FACTORY_H

#include "GameObject.h"
#include "Player.h"
#include "Enemy.h"

// Enum to represent different types of game objects
enum class GameObjectType {
    PLAYER,
    ENEMY
};

// Factory Method
class GameObjectFactory {
public:
    static GameObject* createGameObject(GameObjectType type) {
        switch (type) {
            case GameObjectType::PLAYER:
                return new Player();
            case GameObjectType::ENEMY:
                return new Enemy();
            default:
                return nullptr;
        }
    }
};

#endif // GAME_OBJECT_FACTORY_H
