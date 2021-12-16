#include <iostream>
#include "Vecteur.h"
#include "Matrice.h"
using namespace std;
int main()
{
    int d ;
    cout<<"*******************************  Veuillez saisir la dimension *************************"<<endl;
    cin>>d;

    cout<<"*******************************  Saisi du vecteur *************************"<<endl;
    Vecteur v(d);
    v.remplirVecteur();
    cout<<"*******************************  Saisi de la matrice *************************"<<endl;
    Matrice m(d);
    m.remplirMatrice();
    cout<<"*******************************  Mutliplication Matrice x Vecteur *************************"<<endl;
    return 0;
}
