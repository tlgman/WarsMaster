#pragma once

/**
 * Singleton permettant de gérer une liste des tetures chargées en mémoire
 */
class TextureManager
{
public:
	TextureManager();
	~TextureManager();
	TextureManager& instance();

private:

};

