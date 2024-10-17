#pragma once
#include<iostream>
using namespace std;

class Singleton
{
private:
    int id;
    string libelle;
    static Singleton* instance; // Variable de classe pour contrôler l'unicité de l'objet

    Singleton(); // Constructeur sans paramètre
    Singleton(string libelle); // Constructeur avec paramètre
    //Singleton(Singleton& intance) = delete; // Constructeur de recopie désactivé
    //Singleton& operator = (Singleton& const C) = delete; // Opérateur d'assignation désactivé
                                                                                                               
public:
    void print() const; // Méthode pour afficher les attributs de l'instance
    static Singleton& Createur_instance(); // Méthode pour créer l'unique instance autorisée
    ~Singleton(); //Destructeur
};
