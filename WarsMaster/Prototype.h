#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <memory>

template <class T> class Prototype{
    public:
        virtual ~Prototype(){}
        virtual std::auto_ptr<T> Clone() const = 0; // On utilise auto_ptr pour, car en cas d'exception il est difficile de récupérer la mémoire
};

#endif // PROTOTYPE_H
