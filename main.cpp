#include <iostream>
#include "Vecteur.h"
#include "Matrice.h"
using namespace std;

Vecteur produit(Matrice m,Vecteur v)
{
    Vecteur res(m.dim);
    //res.dim = v.dim;

    int * temp = new int[m.dim];
    int som = 0;

    // produit de la matrice par le vecteur

    for(int i=0; i<m.dim; i++)
    {

        for(int j=0; j<m.dim; j++)
        {

             som = som + m.tab[i][j]*v.tab[j];
        }
        temp[i] = som;
        som = 0;
    }

    res.tab = temp;


    for(int i = 0; i<res.dim;i++)
    {
        cout<<"Temp["<<i<<"] = "<<res.tab[i]<<endl;
    }

    return res;


}
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
    produit(m,v);
    return 0;
}
