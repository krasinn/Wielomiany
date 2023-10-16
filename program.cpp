#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include "polynomian.h"

using namespace std;

int main()
{
    double k, j;
    wielomian wielo1, wielo2, wielo3;

    vector<double> wartosci1, wartosci2;

    cout << "Podaj wspolczynniki pierwszego wielomianu od stopnia 0 do najwiekszego: ";
    do
    {
        cin >> k;
        wartosci1.push_back(k);
    }
    while (cin.get()!='\n');

    cout << "Podaj wspolczynniki drugiego wielomianu od stopnia 0 do najwiekszego: ";
    do
    {
        cin >> j;
        wartosci2.push_back(j);
    } 
    while (cin.get()!='\n');
    
    double tablica1[wartosci1.size()], tablica2[wartosci2.size()];

    copy(wartosci1.begin(), wartosci1.end(), tablica1);
    copy(wartosci2.begin(), wartosci2.end(), tablica2);
    
    wielo1.wspolczynniki = tablica1;
    wielo2.wspolczynniki = tablica2;

    wielo1.poziom = sizeof(tablica1)/8-1;
    wielo2.poziom = sizeof(tablica2)/8-1;

    cout << endl;
    wielo3 = dodaj(wielo1, wielo2);

    cout << "DODAWANIE: w(x) = ";
    for (int i = 0; i <= wielo3.poziom; i++)
    {
        switch (i)
        {
            case 0:
            {
                cout << wielo3.wspolczynniki[i] << " ";
                break;
            }

            case 1:
            {
                if(wielo3.wspolczynniki[i]>=0)
                    cout << "+";
                cout << wielo3.wspolczynniki[i] << "x" << " ";
                break;
            }

            default:
            {
                if(wielo3.wspolczynniki[i]>=0)
                    cout << "+";
                cout << wielo3.wspolczynniki[i] << "x^" << i << " ";
                break;
            }
        }
    }

    cout << endl;
    wielo3 = odejmij(wielo1, wielo2);

    cout << "ODEJMOWANIE: w(x) = ";
    for (int i = 0; i <= wielo3.poziom; i++)
    {
        switch (i)
        {
            case 0:
            {
                cout << wielo3.wspolczynniki[i] << " ";
                break;
            }

            case 1:
            {
                if(wielo3.wspolczynniki[i]>=0)
                    cout << "+";
                cout << wielo3.wspolczynniki[i] << "x" << " ";
                break;
            }

            default:
            {
                if(wielo3.wspolczynniki[i]>=0)
                    cout << "+";
                cout << wielo3.wspolczynniki[i] << "x^" << i << " ";
                break;
            }
        }
    }

    cout << endl;
    wielo3 = pomnoz(wielo1, wielo2);

    cout << "MNOZENIE: w(x) = ";
    for (int i = 0; i <= wielo3.poziom; i++)
    {
        switch (i)
        {
            case 0:
            {
                cout << wielo3.wspolczynniki[i] << " ";
                break;
            }

            case 1:
            {
                if(wielo3.wspolczynniki[i]>=0)
                    cout << "+";
                cout << wielo3.wspolczynniki[i] << "x" << " ";
                break;
            }

            default:
            {
                if(wielo3.wspolczynniki[i]>=0)
                    cout << "+";
                cout << wielo3.wspolczynniki[i] << "x^" << i << " ";
                break;
            }
        }
    }

    
    





}