#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

using namespace sf;
using namespace std;

int main()
{
    // Create a video mode object
    Vector2f aspectRatio;
    aspectRatio.x = VideoMode::getDesktopMode().width;
    aspectRatio.y = VideoMode::getDesktopMode().height;

    // Construct a vertex array
    PrimitiveType getPrimitiveType(Points);
}