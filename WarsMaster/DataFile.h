#ifndef DATAFILE_H
#define DATAFILE_H

#include <string>
#include <fstream>

/**
  * Représente un fichier chargé avec toutes les données retranscritent en code
  */
class DataFile
{
    public:
        DataFile();
        DataFile(std::string path);
        ~DataFile();
        bool load();
        std::string getPath();
        void setString(std::string path);


    private:
        std::string path;
};

#endif // DATAFILE_H
