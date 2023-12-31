#pragma once

#include "world.h"
#include<SFML/Graphics/RenderWindow.hpp>
#include<SFML/System/Time.hpp>

class Game {
public:
    Game();
    void run();

private:
    void processInput();
    void update(sf::Time elapsedTime);
    void render();

    const sf::Time timePerFrame  = sf::seconds(1.f/60.f);
    sf::RenderWindow window;

    World world;
};