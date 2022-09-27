#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
using namespace sf;
using namespace std;

class ComplexPlane
{
    public:
        ComplexPlane::ComplexPlane(float aspectRatio);
        void ComplexPlane::zoomIn();
        void ComplexPlane::zoomOut();
        void ComplexPlane::setCenter(Vector2f coord);
        View getView();
        void ComplexPlane::setMouseLocation(Vector2f coord);
        void ComplexPlane::loadText(Text& text);
        size_t ComplexPlane::countIterations(Vector2f coord);
        void ComplexPlane::iterationsToRGB(size_t count, Uint8& r, Uint8& g, Uint8& b);
    private:
        Vector2f m_mouseLocation;
        View m_view;
        int m_zoomCount;
        float m_aspectRatio;
};