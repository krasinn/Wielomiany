#include <vector>

struct wielomian
{
    int poziom;
    double *wspolczynniki;
};
wielomian dodaj(wielomian a, wielomian b);
wielomian odejmij(wielomian a, wielomian b);
wielomian pomnoz(wielomian a, wielomian b);
int stopien(double *tablica);