﻿#include <SFML/Graphics.hpp>

#include "./include/controlls.h"
#include "./include/algorithms.h"

int main() {

    setRects(rects, SIZE);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            dispSort();

            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::B) {
                    startBubble = true;
                    startShaker = false;
                }
                if (event.key.code == sf::Keyboard::S) {
                    startShaker = true;
                    startBubble = false;
                }
                if (event.key.code == sf::Keyboard::Space && startBubble) {
                    bubbleSort(rects, SIZE);
                }
                if (event.key.code == sf::Keyboard::Space && startShaker) {
                    shakerSort(rects, SIZE);
                }
            }
        }

    }

    return 0;
}
