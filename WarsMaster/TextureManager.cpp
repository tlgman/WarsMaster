#include "TextureManager.h"
#include <iostream>

using namespace std;

TextureManager& TextureManager::instance() {
	static TextureManager instance;
	return instance;
}

TextureManager::TextureManager(){}


TextureManager::~TextureManager(){
	for (auto it = mapTextures.begin(); it != mapTextures.end(); ++it) {
		delete it->second;
	}
}

sf::Texture& TextureManager::getTexture(string path) {
	map<string, sf::Texture*>::iterator it = this->mapTextures.find(path);
	// Si la texture est déjà chargée, on la renvoie
	if (it != mapTextures.end()) {
		return *it->second;
	}
	else {
		sf::Texture* texture = new sf::Texture;
		if (texture->loadFromFile(path)) {
			this->mapTextures.insert(pair<string, sf::Texture*>(path, texture));
		}
		else {
			delete texture;
			cerr << "Error !!" << endl;
		}
		return *texture;
	}
}

bool TextureManager::unload(string path) {
	map<string, sf::Texture*>::iterator it = this->mapTextures.find(path);
	// Si la texture est chargée
	if (it != this->mapTextures.end()) {
		delete it->second;
		this->mapTextures.erase(it);
		return true;
	}
	return false;
}
