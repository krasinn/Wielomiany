#include "polynomian.h"
#include <vector>

wielomian dodaj(wielomian a, wielomian b)
{
    wielomian c;
    if(a.poziom > b.poziom)
    {
        c.poziom = a.poziom;
    }
    else
    {
        c.poziom = b.poziom;
    }

    double tablica[100000];

    for(int i=0; i<c.poziom; i++)
    {
        tablica[i]=0;
    }

    for (int i=0; i<=a.poziom ; i++)
    {
        tablica[i] += a.wspolczynniki[i];
    }

    for (int i=0; i<=b.poziom; i++)
    {
        tablica[i] += b.wspolczynniki[i];
    }
    

    c.wspolczynniki = tablica;

    return c;
}

wielomian odejmij(wielomian a, wielomian b)
{
    wielomian c;
    if(a.poziom > b.poziom)
    {
        c.poziom = a.poziom;
    }
    else
    {
        c.poziom = b.poziom;
    }

    double tablica[100000];

    for(int i=0; i<=c.poziom; i++)
    {
        tablica[i]=0;
    }

    for (int i=0; i<=a.poziom ; i++)
    {
        tablica[i] += a.wspolczynniki[i];
    }

    for (int i=0; i<=b.poziom; i++)
    {
        tablica[i] -= b.wspolczynniki[i];
    }
    

    c.wspolczynniki = tablica;

    return c;
}

wielomian pomnoz(wielomian a, wielomian b)
{
    wielomian c;
    c.poziom = a.poziom + b.poziom;

    double tablica[100000];

    for(int i=0; i <= c.poziom; i++)
    {
        tablica[i]=0;
    }

    for (int i=0; i <= a.poziom; i++)
    {
        for (int j=0; j <= b.poziom; j++)
        {
            tablica[i+j] += a.wspolczynniki[i]*b.wspolczynniki[j];
        }
    }
    
    c.wspolczynniki = tablica;

    return c;
}

int stopien(wielomian a)
{
    return a.poziom;
}