
#include <iostream>
using namespace std;

/*****************************************************
 * Compléter le code à partir d'ici
 *****************************************************/
class Patient{
private:
 float masse;
 float hauteur;
public:
void init(float m,float h){
    if(m>0 && h>0){
        masse=m;
        hauteur=h;
        }else{
            masse=0;
            hauteur=0;
        }
}
void afficher(){
    cout<<" Patient: "<< masse <<" kg pour "<< hauteur <<"m"<<endl;
}
float poids(){return masse;}
float taille(){return hauteur;}
float imc(){
    if(hauteur==0){
        return 0;
    }else{
        return masse/(hauteur*hauteur);
    }
}
};

/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

int main()
{
  Patient quidam;
  double poids, taille;
  do {
    cout << "Entrez un poids (kg) et une taille (m) : ";
    cin >> poids >> taille;
    quidam.init(poids, taille);
    quidam.afficher();
    cout << "IMC : " << quidam.imc() << endl;
  } while (poids * taille != 0.0);
  return 0;
}
