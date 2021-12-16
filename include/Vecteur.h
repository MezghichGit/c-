#ifndef VECTEUR_H
#define VECTEUR_H


class Vecteur
{
    public:
        Vecteur(int);
        virtual ~Vecteur();
        void remplirVecteur();

    protected:

    private:

        int *tab;
        int dim;
};

#endif // VECTEUR_H
