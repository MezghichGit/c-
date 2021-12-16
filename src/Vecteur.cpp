#include "Vecteur.h"
#include <iostream>
#include <stdio.h>
using namespace std;
Vecteur::Vecteur(int d)
{
    dim = d;
    tab = new int[dim];
}

Vecteur::~Vecteur()
{
    //dtor
}


void Vecteur::remplirVecteur()
{
    cout<<"Valeu de dim : "<< dim <<endl;
    for(int i=0; i<dim; i++)
    {
        cout<<"Donner une valeur";
        cin>>tab[i];
        //scanf("%d",&tab[i]);
    }

    cout<<"contenu du tableau : "<<endl;

    for(int i=0; i<dim; i++)
    {
        cout<<"Tab["<<i<<"] = "<<tab[i]<<endl;
    }

}
