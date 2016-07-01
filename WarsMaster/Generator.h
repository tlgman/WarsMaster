#ifndef GENERATOR_H
#define GENERATOR_H

#include <iostream>
#include <memory>
#include <map>

#include "Prototype.h"


template <class Type>
class Generator
{
    public:
        Generator(){};
        //~Generator();
        virtual std::auto_ptr<Type> Clone() const = 0;
        static void Register(const std::string& key, Type&);
        virtual Type& Create(const std::string& key) = 0;
    protected:
        static std::map<std::string, Type> objMap;
};


#endif // GENERATOR_H
