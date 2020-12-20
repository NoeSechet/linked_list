#pragma once

#include <iostream>
#include <fstream>
#include <strstream>
#include <algorithm>
#include <cmath>
#include <list>
#include <time.h>
#include <vector>

#include <stdlib.h>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>

enum shape_type {
	CIRCLE,
	RECTANGLE
};

sf::CircleShape* create_circle(sf::Vector2f  position, float  radius);
float getDistance(sf::Vector2f pos1, sf::Vector2f pos2);
