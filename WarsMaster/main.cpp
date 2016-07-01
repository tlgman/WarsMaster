#include <iostream>
#include <SFML/Graphics.hpp>
#include "EntitiesManager.h"
#include "Level.h"
#include "libs/json.hpp"

#include "Soldier.h"

#define DEBUG 1

#define SIZE_GROUND_CASE 32
#define NB_CASE_HEIGHT 20
#define NB_CASE_WIDTH 25
#define NB_CASE_SCREEN NB_CASE_HEIGHT * NB_CASE_WIDTH
//
using namespace std;
using namespace sf;

using json = nlohmann::json;

// ------------------------------------------------------------------------------------------------------------------------------------
// --------------------------------- Design Pattern en C++ ====> http://come-david.developpez.com/tutoriels/dps/ --------------------------
// ------------------------------------------------------------------------------------------------------------------------------------


int main(){
    // TODO !!!!!!!!!!!!!!!!!!! => Enlever !!!!!!!!!!!!!!!!
    json j = "{ \"happy\": true, \"pi\": 3.141 }"_json;


    RenderWindow window(VideoMode(NB_CASE_WIDTH*SIZE_GROUND_CASE, NB_CASE_HEIGHT*SIZE_GROUND_CASE), "SFML");
    cout << "Lancement de l'application..." << endl;
    Texture groundTexture;
    if(!groundTexture.loadFromFile("resources/images/ground/grass_0.png")){
        cout << "Erreur : Chargement de l'image impossible." << endl;
    }


    Sprite groundSprites[NB_CASE_HEIGHT][NB_CASE_WIDTH];
    for(int i=0; i < NB_CASE_HEIGHT; ++i){
        for(int j=0; j < NB_CASE_WIDTH; ++j){
            groundSprites[i][j].setTexture(groundTexture);
            groundSprites[i][j].setPosition(j*SIZE_GROUND_CASE , i*SIZE_GROUND_CASE);
        }
    }

    cout << groundSprites[0][NB_CASE_WIDTH-1].getPosition().x << endl;
    cout << "Windows -> x: " << window.getSize().x << " y: " << window.getSize().y << endl;

    Level level;

	EntitiesManager etM;
	Soldier* player = new Soldier({ 10, 10 }, "resources/images/soldier/handgun/move/survivor-move_handgun_0.png");


	etM.add((Entity*)player);



    while(window.isOpen()){

        Event event;

        while(window.pollEvent(event)){
            if(event.type == Event::Closed){
                window.close();
            }
        }
        window.clear();


        for(int i=0; i < NB_CASE_HEIGHT; ++i){
            for(int j=0; j < NB_CASE_WIDTH; ++j){
                window.draw(groundSprites[i][j]);
            }
        }
		
        level.update(window);
		etM.update(window);
        window.display();
    }
	etM.~EntitiesManager();
	#ifdef DEBUG
		system("PAUSE");
	#endif
    return EXIT_SUCCESS;
}
