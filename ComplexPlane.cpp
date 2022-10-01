#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include <cmath>

#include "ComplexPlane.h"

using namespace sf;
using namespace std;

ComplexPlane::ComplexPlane(float aspectRatio)
{
    m_aspectRatio = aspectRatio;
    m_view.setSize(Vector2f(BASE_WIDTH, -BASE_HEIGHT * m_aspectRatio));
    m_view.setCenter(Vector2f(0.0, 0.0));
    m_zoomCount = 0;
}

void ComplexPlane::zoomIn()
{
    m_zoomCount++;
    double zoomIn_X = BASE_WIDTH * pow(BASE_ZOOM, m_zoomCount);
    double zoomIn_Y = BASE_HEIGHT * m_aspectRatio * pow(BASE_ZOOM, m_zoomCount);
    m_view.setSize(Vector2f(zoomIn_X, zoomIn_Y));
}

void ComplexPlane::zoomOut()
{
    m_zoomCount--;
    double zoomOut_X = BASE_WIDTH * pow(BASE_ZOOM, m_zoomCount);
    double zoomOut_Y = BASE_HEIGHT * m_aspectRatio * pow(BASE_ZOOM, m_zoomCount);
    m_view.setSize(Vector2f(zoomOut_X, zoomOut_Y));
}

void ComplexPlane::setCenter(Vector2f coord)
{
    m_view.setCenter(Vector2f(coord));
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