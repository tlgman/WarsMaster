#pragma once

#include <SFML/Graphics.hpp>

/**
 * Singleton permettant de g�rer une liste des tetures charg�es en m�moire
 * --> Permet de ne pas recharger des textures d�j� charg�es
 */
class TextureManager
{
public:
	static TextureManager& instance();
	/**
	 * Retourne une texture en fonction du chemin demand�
	 * @param path: le chemin de la texture
	 */
	sf::Texture& getTexture(std::string path);

	/**
	 * "D�charge" une texture
	 * @param path Chemin de la texture � d�charger
	 * @return vrai si d�chargement r�ussi
	 */
	bool unload(std::string path);
	/**
	 * Vide la m�moire utilis�e par les textures
	 */
	~TextureManager();
private:
	TextureManager();
	TextureManager& operator= (const TextureManager&) = delete;
	TextureManager(const TextureManager &) = delete;
	// La correspondance les chemins et les textures correspondantes
	std::map<std::string, sf::Texture*> mapTextures;
};

