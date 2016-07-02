#ifndef LOADER_H
#define LOADER_H

#include <map>
#include <string>
#include "DataFile.h"

class FileManager
{
    public:
        static FileManager& instance();
        DataFile& getFile(std::string path);
		~FileManager();
    private:
        FileManager();
        
        FileManager& operator= (const FileManager&) = delete;
        FileManager(const FileManager &) = delete;

        // La correspondance entre les nom et les données des fichiers
       std::map<std::string, DataFile*> mapFiles;

};

#endif // LOADER_H
