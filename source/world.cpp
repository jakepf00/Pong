#include "include/world.h"

World::World(sf::RenderWindow& window) : 
window(window),
worldView(window.getDefaultView()),
playerPaddle(sf::Vector2f(10.f, 100.f)) {
    playerPaddle.setFillColor(sf::Color::Green);
    playerPaddle.setPosition(worldView.getSize().x - 20.f, worldView.getSize().y / 2.f);
}

void World::update(sf::Time dt) {

}

void World::draw() {
    window.setView(worldView);
    window.draw(playerPaddle);
}