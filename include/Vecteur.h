#ifndef VECTEUR_H
#define VECTEUR_H
#include "Matrice.h"
class Vecteur
{
    public:
        Vecteur(int);
        virtual ~Vecteur();
        void remplirVecteur();
        friend Vecteur produit(Matrice, Vecteur);

    protected:

    private:

        int *tab;
        int dim;
};

#endif // VECTEUR_H
