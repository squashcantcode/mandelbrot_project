#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include <cmath>

#include "ComplexPlane.h"

using namespace sf;
using namespace std;

ComplexPlane::ComplexPlane(float aspectRatio)       // Unfinished
{
    m_aspectRatio = aspectRatio;
    m_zoomCount = 0;
}

void ComplexPlane::zoomIn()     // Unfinished
{
    m_zoomCount++;
    double zoomIn_X = BASE_WIDTH * pow(BASE_ZOOM, m_zoomCount);
    double zoomIn_Y = BASE_HEIGHT * m_aspectRatio * pow(BASE_ZOOM, m_zoomCount);
}

void ComplexPlane::zoomOut()     // Unfinished
{
    m_zoomCount--;
    double zoomOut_X = BASE_WIDTH * pow(BASE_ZOOM, m_zoomCount);
    double zoomOut_Y = BASE_HEIGHT * m_aspectRatio * pow(BASE_ZOOM, m_zoomCount);
}

void ComplexPlane::setCenter(Vector2f coord)        // Unfinished
{

}

void ComplexPlane::setMouseLocation(Vector2f coord)
{
    m_mouseLocation = coord;
}

void ComplexPlane::loadText(Text& text)     // Unfinished
{

}

size_t ComplexPlane::countIterations(Vector2f coord)        // Unfinished
{

}

void ComplexPlane::iterationsToRGB(size_t count, Uint8& r, Uint8& g, Uint8& b)      // Unfinished
{

}