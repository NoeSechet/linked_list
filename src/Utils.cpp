#include "include/Utils.h"

sf::CircleShape* create_circle(sf::Vector2f  position, float  radius)
{
    sf::CircleShape* shape = new sf::CircleShape(radius);
    shape->setPosition(position);
    shape->setFillColor(sf::Color::White);
    return shape;
}

float getDistance(sf::Vector2f pos1, sf::Vector2f pos2)
{
    double result = (pos1.x - pos2.x) * (pos1.x - pos2.x) + (pos1.y - pos2.y) * (pos1.y - pos2.y);
    float distance = sqrt(
        result
    );
    std::cout << "distance = " << distance << std::endl;
    return distance;
}