#include "Singleton.h"

// Initialisation de la variable statique
Singleton* Singleton::instance = nullptr;

Singleton::Singleton()
{
    this->id = 0;
    this->libelle = "";
}

Singleton::Singleton(string libelle)
{
    this->id = 0;
    this->libelle = libelle;
}

void Singleton::print() const
{
    cout << "id = " << this->id << endl;
}

Singleton& Singleton::Createur_instance()
{
    if (!instance)
        instance = new Singleton();
    return *instance;
}

Singleton::~Singleton()
{
    if (instance)
        delete instance;
}
