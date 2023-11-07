// Ex4_TD2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//



#include <iostream>
using namespace std;


class Test {
public:
    

    void call() {
        n++; // Incrémente le compteur à chaque appel de la fonction
        cout << "Fonction 'call' a ete appelee " << n << " fois." << endl;
    }

    static int GetCall() {
        return n;
    }

private:
    static int n; // Variable statique pour le comptage des appels
};

int Test::n = 0; // Initialisation de la variable statique

int main() {
    Test t1;
    t1.call();
    t1.call();
    t1.call();
    t1.call();

    // Afficher le nombre total d'appels à partir du programme principal
    std::cout << "Nombre total d'appels depuis le programme principal est : " << Test::GetCall() << std::endl;

    return 0;
}

