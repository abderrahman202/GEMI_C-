#include <iostream>

using namespace std;

class vecteur3d {
public:
    float x1=0, y1=0, z1=0, x2=0, y2=0, z2=0, somme_x=0, somme_y=0, somme_z=0;

    vecteur3d(float x_1 = 0, float y_1 = 0, float z_1 = 0, float x_2 = 0, float y_2 = 0, float z_2 = 0) {
        x1 = x_1;
        y1 = y_1;
        z1 = z_1;

        x2 = x_2;
        y2 = y_2;
        z2 = z_2;
    }

    void display_composents() {
        cout << "Le vecteur A est : (" << x1 << ", " << y1 << ", " << z1 << ")" << endl;
        cout << "Le vecteur B est : (" << x2 << ", " << y2 << ", " << z2 << ")" << endl;
    }
    float somme(){
        somme_x=x1+x2;
        somme_y=y1+y2;
        somme_z=z1+z2;
    }
    void GetValues(){
        
    }
    void display_somme(){
        cout<<"La somme des vecteurs A et B est : "<<"("<<somme_x<<","<<somme_y<<","<<somme_z<<")"<<endl;
    }


};

int main() {
    vecteur3d v(1, 2, 3, 4, 5, 6); 
    
    v.display_composents();
    v.display_somme();
    return 0;
}
