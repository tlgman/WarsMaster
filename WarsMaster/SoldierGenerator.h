#ifndef SOLDIERGENERATOR_H
#define SOLDIERGENERATOR_H

#include "Generator.h"
#include "Soldier.h"


class SoldierGenerator : public Generator<Soldier>
{
    public:
        SoldierGenerator();
        virtual ~SoldierGenerator();
    protected:
    private:
};

#endif // SOLDIERGENERATOR_H
