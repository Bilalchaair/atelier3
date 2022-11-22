#include <iostream>
using namespace std;
// la classe mère nommée shape
class shape {
public:
float h,l;
shape(){
    l=5.5;
    h=3;
}
};
// première classe fille nommee triangle
class triangle: public shape {
public:
// fct pour afficher le résultat de l'aire
void area() {
cout<<"l'aire du triangle est :"<<((l+h)/2)<<endl;
}
};
// deuxième classe fille nommée rectangle
class rectangle: public shape {
public:
// fct pour afficher le résultat de l'aire
void area() {
cout<<"l'aire du rectangle est :"<<((l*h))<<endl;
}};
main() {
triangle p1;
rectangle p2;
p1.area();
p2.area();
}
