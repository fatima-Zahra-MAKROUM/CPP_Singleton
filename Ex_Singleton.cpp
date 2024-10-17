#include "Singleton.h"
#include <iostream>

int main()
{

    Singleton& instance1 = Singleton::Createur_instance();

    instance1.print();

    // Tentative d'obtenir une autre instance (ça retournera la même)
    Singleton& instance2 = Singleton::Createur_instance();

    // Vérification que les deux instances pointent vers le même objet
    if (&instance1 == &instance2)
        cout << "Les deux instances sont les memes." << endl;
    else
        cout << "Les instances sont différentes." << endl;

    return 0;
}
