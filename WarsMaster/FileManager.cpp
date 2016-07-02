#include "FileManager.h"
#include <iostream>

using namespace std;

FileManager& FileManager::instance(){
    static FileManager instance;
    return instance;
}


FileManager::FileManager(){}

FileManager::~FileManager(){
    // Vide la mémoire de tous les fichiers de la liste
    for(auto it = mapFiles.begin(); it != mapFiles.end(); ++it){
        delete it->second;
    }
}


DataFile& FileManager::getFile(string path){
    map<string, DataFile*>::iterator it = mapFiles.find(path);
    // Si le fichier est déjà chargé, on le renvoie
    if(it != mapFiles.end()){
        return *it->second;
    } else {
        DataFile* f = new DataFile(path);
        if(f->load()){
            this->mapFiles.insert(pair<string, DataFile*>(path, f));
        } else{
            delete f;
            cerr << "Error !!" << endl;
        }
        return *f;
    }
}
