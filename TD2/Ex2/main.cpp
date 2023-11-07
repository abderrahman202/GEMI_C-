// Ex2_TD2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;
class vecteur3d {
public:
    float x=0, y=0, z=0;
    float composents(float x1 = 0, float y1 = 0,float z1=0) {
        x = x1;
        y = y1;
        z = z1;
    }

    void display() {
        cout <<"Le valeur du vecteur est :" << "(" << x << "," << y << "," << z << ")" << endl;
    }
};


int main()
{
    vecteur3d v;
    v.display();
}
