#include<iostream>
#include<cmath>
using namespace std;

class Point{
private:
float x,y;

public:
Point(float a ,float b){
x=a;
y=b;
}

float translation(double dx, double dy){
    x+=dx;
    y+=dy;
}

void Affichage_coordonnee(){
    cout<<"Les coordonnee du point sont: ("<<x<<","<<y<<")"<<endl;
}
float getCoordonnee(float a, float b){
    cout<<"Saisir la valeur de x: ";
    cin>>a;
    cout<<"\nSaisir la valeur de y: ";
    cin>>b;
    x=a;
    y=b;
}
float distance(Point deuxieme){
    return sqrt(pow(x-deuxieme.x,2)+pow(y-deuxieme.y,2));
}
float milieu(Point deuxieme){

}
};