#pragma once
#include<iostream>
using namespace std;

class Singleton
{
private:
    int id;
    string libelle;
    static Singleton* instance; // Variable de classe pour contr�ler l'unicit� de l'objet

    Singleton(); // Constructeur sans param�tre
    Singleton(string libelle); // Constructeur avec param�tre
    //Singleton(Singleton& intance) = delete; // Constructeur de recopie d�sactiv�
    //Singleton& operator = (Singleton& const C) = delete; // Op�rateur d'assignation d�sactiv�
                                                                                                               
public:
    void print() const; // M�thode pour afficher les attributs de l'instance
    static Singleton& Createur_instance(); // M�thode pour cr�er l'unique instance autoris�e
    ~Singleton(); //Destructeur
};
