#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <string>
#include <iostream>

// Base class for all game objects
class GameObject {
public:
    virtual void render() = 0; // Pure virtual function for rendering
    virtual ~GameObject() {}
};

#endif // GAME_OBJECT_H
