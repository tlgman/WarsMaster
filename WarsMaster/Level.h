#ifndef LEVEL_H
#define LEVEL_H

#include <string>
#include <SFML/Graphics.hpp>
#include "Map.h"

class Level
{
    public:
        Level();
        Level(std::string levelName);

        void update(sf::RenderWindow& window);
        bool load(std::string levelName);
    private:
        Map map;
};

#endif // LEVEL_H
