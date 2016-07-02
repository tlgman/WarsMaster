#pragma once

#include <SFML/Graphics.hpp>

/**
 * Singleton permettant de gérer une liste des tetures chargées en mémoire
 * --> Permet de ne pas recharger des textures déjà chargées
 */
class TextureManager
{
public:
	static TextureManager& instance();
	/**
	 * Retourne une texture en fonction du chemin demandé
	 * @param path: le chemin de la texture
	 */
	sf::Texture& getTexture(std::string path);

	/**
	 * "Décharge" une texture
	 * @param path Chemin de la texture à décharger
	 * @return vrai si déchargement réussi
	 */
	bool unload(std::string path);
	/**
	 * Vide la mémoire utilisée par les textures
	 */
	~TextureManager();
private:
	TextureManager();
	TextureManager& operator= (const TextureManager&) = delete;
	TextureManager(const TextureManager &) = delete;
	// La correspondance les chemins et les textures correspondantes
	std::map<std::string, sf::Texture*> mapTextures;
};

