#ifndef DATAFILE_H
#define DATAFILE_H

#include <string>
#include <fstream>

/**
  * Repr�sente un fichier charg� avec toutes les donn�es retranscritent en code
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
