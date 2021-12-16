#include "Matrice.h"
#include <iostream>
using namespace std;
Matrice::Matrice(int d)
{
  dim = d;
  tab = new  int *[dim];

    for (int i=0; i < dim; i++)
    {
        tab[i] = new int[ dim ];
    }
}

Matrice::~Matrice()
{
    //dtor
}


void Matrice::remplirMatrice()
{
    cout<<"Valeur de dim : "<< dim <<endl;

    // La partie saisie de la matrice
    for(int i=0; i<dim; i++)
    {

        cout<<"Donner les elements de la ligne : "<< i+1 <<endl;

        for(int j=0; j<dim; j++)
        {

            cout<<"Donner un element de la ligne : "<< i+1 <<endl;
            cin>>tab[i][j];
        }
    }

    // La partie affichage de la matrice
    cout<<"contenu de la matrice : "<<endl;

    for(int i=0; i<dim; i++)
    {
        cout<<"Elements de la ligne : "<< i+1 <<endl;

        for(int j=0; j<dim; j++)
        {

           cout<<"Mat["<<i<<","<<j<<"] = "<<tab[i][j]<<endl;
        }


    }

}
