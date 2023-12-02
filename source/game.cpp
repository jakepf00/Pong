#include "include/game.h"
#include<SFML/Window/Event.hpp>

Game::Game()
: window(sf::VideoMode(640, 480), "Pong", sf::Style::Close) {
    window.setKeyRepeatEnabled(false);
}

void Game::run() {
    sf::Clock clock;
    sf::Time timeSinceLastUpdate = sf::Time::Zero;
    while (window.isOpen()) {
        sf::Time elapsedTime = clock.restart();
        timeSinceLastUpdate += elapsedTime;
        while (timeSinceLastUpdate > timePerFrame) {
            timeSinceLastUpdate -= timePerFrame;
            processInput();
            update(timePerFrame);
        }
        render();
    }
}

void Game::processInput() {
    sf::Event event;
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) window.close();
	}
}

void Game::update(sf::Time elapsedTime) {}

void Game::render() {
    window.clear();
    // Draw...
    window.display();
}