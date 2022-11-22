#include <iostream>
#include <cmath>
using namespace std;
// la classe complexe
class complexe {
//attributs de la classe complexe
    public:
    float r,img;
// méthodes de la classe complexe
        complexe(){};
        complexe(float r,float img){
           //le pointeur this est utilisé pour récupérer le r et le img de l'objet
            this->r=r;
            this->img=img;
        }
// la fonction qui affiche l’équation  
        void afficher(){
            if (img>=0)
            cout<<r<<"+"<<img<<"i"<<endl;
            else
            cout<<r<<""<<img<<"i"<<endl;
            
        }
// la fonction operator+ pour l’addition
        void operator+(complexe a){
            complexe c; //c pour mettre la somme des 2 complexes
            c.r = r+a.r;
            c.img= img+ a.img;
            c.afficher();
        }

// la fonction operator- pour la soustraction
        void operator-(complexe a){
            complexe c; 
            c.r = r-a.r;
            c.img= img - a.img;
            c.afficher();
        }

// la fonction operator* pour la multiplication
        void operator*(complexe a){
            complexe c; 
            c.r= r*a.r - img* a.img;
            c.img =r *a.img+ img*a.r;
            c.afficher();
        }

// la fonction operator/ pour la division

        void operator/(complexe a){
            complexe c; 
            c.r= (r*a.r + img* a.img)/(pow(a.r,2)+pow(a.img,2)) ;
            c.img = -(r *a.img - img*a.r)/(pow(a.r,2)+pow(a.img,2)) ;
            c.afficher();
        }
};
 main(){
    float i,j,x,y;
    cout<<"entrez le premier nombre reel :";cin>>i;
    cout<<"entrez le premier nombre imaginaire :";cin>>j;
    cout<<"entrez le deuxieme nombre reel :";cin>>x;
    cout<<"entrez le deuxieme nombre imaginaire :";cin>>y;
    complexe a(i,j);
    complexe b(x,y);
    
  cout<<"a + b : ";a+b;
  cout<<"a - b : ";a-b;
  cout<<"a x b : ";a*b;
  cout<<"a / b : ";a/b;

    }
