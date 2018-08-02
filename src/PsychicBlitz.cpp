//============================================================================
// Name        : PsychicBlitz.cpp
// Author      : Sebastian Miller
// Version     : 0.0.1
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <string>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600, 32), "Psychic Blitz Pre-Pre-Alpha"); //create window
    window.setFramerateLimit(60); // set framerate

    // run the program as long as the window is open (main loop)
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event; // ALWAYS DO THIS BEFORE sf::Event
        while (window.pollEvent(event))
                {
                    // "close requested" event: we close the window
                    if (event.type == sf::Event::Closed)
                        window.close();
                }

                // clear the window with black color
                window.clear(sf::Color::Black);

                // draw everything here...
                sf::CircleShape shape(50);
                shape.setFillColor(sf::Color(150, 50, 250));

                // set a 10-pixel wide orange outline
                shape.setOutlineThickness(10);
                shape.setOutlineColor(sf::Color(250, 150, 100));

                sf::Vector2f position = shape.getPosition();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                {
                	// left key is pressed: move our character
                	shape.move(-1, 0);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                {
                	// right key is pressed: move our character
                	shape.move(1, 0);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
                {
                	// up key is pressed: move our character
                	shape.move(0, -1);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
                {
                	// down key is pressed: move our character
                	shape.move(0, 1);
                }

                window.draw(shape);

                // end the current frame
                window.display();
            }

        return 0;
}
