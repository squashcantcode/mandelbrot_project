#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

#include "ComplexPlane.h"

using namespace sf;
using namespace std;

int main()
{
    // Create a video mode object and get desktop resolution
    Vector2f aspectRatio;
    aspectRatio.x = VideoMode::getDesktopMode().width;
    aspectRatio.y = VideoMode::getDesktopMode().height;

    // Create a window
    RenderWindow window(VideoMode(aspectRatio.x, aspectRatio.y), "Mandelbrot", Style::Fullscreen);

    // Construct an object of type ComplexPlane (I might have done it wrong, but we'll see)
    Vector2f ComplexPlane;

    // Construct a vertex array
    VertexArray background;
    background.setPrimitiveType(Points);
    background.resize(aspectRatio.x * aspectRatio.y);

    // Make enum class State variables
    enum class State {CALCULATING, DISPLAYING};

    // Initialize it to CALCULATING
    State state = State::CALCULATING;

    // Make event
    Event event;

    // Main game loop
    while(window.isOpen())
    {
        while(window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
            window.close();
            }

            if (event.type == Event::MouseButtonPressed)
            {
                window.mapPixelToCoords(Mouse::getPosition(window));  

                if (event.mouseButton.button == Mouse::Left)
                {
                }

                if (event.mouseButton.button == Mouse::Right)
                {
                }
            }

            if (event.type == Event::MouseMoved)
            {
                window.mapPixelToCoords(Mouse::getPosition());
            }

            if (Keyboard::isKeyPressed(Keyboard::Escape))
            {
                window.close();
            }
        }

        // Update scene segment
        if (state == State::CALCULATING)
        {
            for(int j = 0; j < aspectRatio.x; j++)
            {
                for(int i = 0; i < aspectRatio.y; i++)
                {
                    background[j + i * aspectRatio.x].position = {(float)j, (float)i};
                }
                window.mapPixelToCoords(Mouse::getPosition());
                                
            }
        }
        (state == State::DISPLAYING);

        // Draw the scene segment
        window.clear();
        window.draw(background);
        window.draw(text);
        window.display();

}