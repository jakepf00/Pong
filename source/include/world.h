#pragma once

#include<SFML/Graphics/RectangleShape.hpp>
#include<SFML/Graphics/RenderWindow.hpp>

class World {
public:
    World(sf::RenderWindow& window);
    void update(sf::Time dt);
    void draw();

private:
    sf::RenderWindow& window;
    sf::View worldView;

    sf::RectangleShape playerPaddle;
    sf::RectangleShape aiPaddle;
};