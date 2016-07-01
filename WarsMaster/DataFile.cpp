#include "DataFile.h"
#include <iostream>

using namespace std;

DataFile::DataFile(){}

DataFile::DataFile(std::string path){
    this->path = path;
}

DataFile::~DataFile(){}

bool DataFile::load(){
    ifstream file(this->path.c_str(), ios::in);
    if(file){
        cout << "Fichier ouvert !!" << endl;
        file.close();
        return true;
    }
    // Erreur de l'ouverture du fichier
    return false;
}
string DataFile::getPath(){
    return this->path;
}

void DataFile::setString(std::string path){
    this->path = path;
}
