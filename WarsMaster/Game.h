#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "Level.h"


class Game
{
    public:
        Game();
        Game(std::string levelName);
        virtual ~Game();
    private:
        Level level;

};

#endif // GAME_H
