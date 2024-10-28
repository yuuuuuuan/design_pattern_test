#include "GameObjectFactory.h"

int main() {
    // Create a Player object
    GameObject* player = GameObjectFactory::createGameObject(GameObjectType::PLAYER);
    player->render(); // Output: Rendering Player!
    
    // Create an Enemy object
    GameObject* enemy = GameObjectFactory::createGameObject(GameObjectType::ENEMY);
    enemy->render(); // Output: Rendering Enemy!

    // Clean up
    delete player;
    delete enemy;

    return 0;
}
