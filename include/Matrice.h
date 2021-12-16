#ifndef MATRICE_H
#define MATRICE_H


class Matrice
{
    public:
        Matrice(int);
        virtual ~Matrice();
        void remplirMatrice();

    protected:

    private:
        int dim;
        int tab[3][3];
};

#endif // MATRICE_H
