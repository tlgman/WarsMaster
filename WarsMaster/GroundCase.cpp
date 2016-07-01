#include "GroundCase.h"

using namespace sf;

GroundCase::GroundCase(){
    Sprite();
}

GroundCase::GroundCase(const sf::Texture& texture, const Vector2f postition){
    Sprite();
    Sprite::setTexture(texture);
    Sprite::setPosition(postition);
}



