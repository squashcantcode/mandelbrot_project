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
    PrimitiveType getPrimitiveType(Points);

    // Make enum class State variables
    enum class State {CALCULATING, DISPLAYING};

    // Initialize it to CALCULATING
    State state = State::CALCULATING;

    // Main game loop
    while(window.isOpen())
    {
        Event event;
        if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}
    }
}