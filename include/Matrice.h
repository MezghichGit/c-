#ifndef MATRICE_H
#define MATRICE_H
class Vecteur;
class Matrice
{
    public:
        Matrice(int);
        virtual ~Matrice();
        void remplirMatrice();
        friend Vecteur produit(Matrice, Vecteur);

    protected:

    private:
        int dim;
        int ** tab;
};

#endif // MATRICE_H
