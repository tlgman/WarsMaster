#include "TextureManager.h"



TextureManager::instance() {
	static FileManager instance;
	return instance;
}

TextureManager::TextureManager(){}


TextureManager::~TextureManager()
{
}
