//
//  main.cpp
//  Polimorfizm
//
//  Created by Maciej Maślanka on 12/06/16.
//  Copyright © 2016 Maciej Maślanka. All rights reserved.
//
#define M_PI 3.14159265358979323846
#include <cmath>
#include <iostream>
using namespace std;
class Bryla
{
public:
    virtual void pobierz_dane() = 0;
    virtual void objetosc() = 0;
    virtual void pole_powierzchni_calkowitej() = 0;
    virtual ~Bryla()
    { }
};

class Stozek
: public Bryla
{
private:
    double H, r , l, V, Pc;
public:
    virtual void pobierz_dane()
    {
        cout << "Podaj wysokosc stozka" << endl;
        cin >> H;
        cout << "Podaj promien podstawy stozka" << endl;
        cin >> r;
        cout << "Podaj tworzaca stozka" << endl;
        cin >> l;
    }
    virtual void objetosc()
    {
        V = (M_PI*pow(r,2)*H)/3.0;
        cout <<"Objetosc stozka wynosi: "<< V<< endl;
    }
    virtual void pole_powierzchni_calkowitej()
    {
        Pc = M_PI*r*(r + l);
        cout <<"Pole powierzchni stozka wynosi: "<< Pc << endl;
    }
};

class Walec
: public Bryla
{
private:
    double H, r, V, Pc;
    
public:
    virtual void pobierz_dane()
    {
        cout << "Podaj wysokosc walca" << endl;
        cin >> H;
        cout << "Podaj promien walca" << endl;
        cin >> r;
    }
    virtual void objetosc()
    {
        V = M_PI*pow(r, 2)*H;
        cout <<"Objetosc walca wynosi: "<< V << endl;
    }
    virtual void pole_powierzchni_calkowitej()
    {
        Pc = 2*M_PI*pow(r, 2)+2*M_PI*r*H;
        cout <<"Pole powierzchni calkowite walca: "<< Pc << endl;
    }
};
class Kula
:public Bryla
{
private:
    double R, V, Pc;
public:
    virtual void pobierz_dane()
    {
        cout << "Podaj promien kuli" << endl;
        cin >> R;
    }
    virtual void objetosc()
    {
        V = (4.0/3.0)*M_PI*pow(R, 3);
        cout <<"Objetosc kuli wynosi: "<< V << endl;
    }
    virtual void pole_powierzchni_calkowitej()
    {
        Pc = 4*M_PI*pow(R, 2);
        cout <<"Pole powierzchni kuli wynosi: "<< Pc << endl;
    }
};
class CzworoscianForemny
:public Bryla
{
private:
    double a,V, Pc;
public:
    virtual void pobierz_dane()
    {
        cout << "Podaj dlugosc sciany bocznej czworoscianu foremnego" << endl;
        cin >> a;
    }
    virtual void objetosc()
    {
        V = (pow(a, 3)*sqrt(2))/12;
        cout << "Objetosc czworoscianu forenego wynosi: " << V << endl;
    }
    virtual void pole_powierzchni_calkowitej()
    {
        Pc = pow(a, 2)*sqrt(3);
        cout <<"Pole powierzchni calkowitej czworoscianu foremnego wynosi: "<< Pc << endl;
    }
};
class Prostopadloscian
:public Bryla
{
private:
    double a, b , c, V, Pc;
public:
    virtual void pobierz_dane()
    {
        cout << "Podaj dlugosc sciany podstawy a prostopadloscianu" << endl;
        cin >> a;
        cout << "Podaj dlugosc sciany podstawy b prostopadloscianu" << endl;
        cin >> b;
        cout << "Podaj wysokosc prostopadloscianu" << endl;
        cin >> c;
    }
    virtual void objetosc()
    {
        V = a*b*c;
        cout <<"Objetosc prostopadloscianu wynosi: "<< V << endl;
    }
    virtual void pole_powierzchni_calkowitej()
    {
        Pc = 2*(a*b + a*c + b*c);
        cout <<"Pole powierzchni prostopadloscianu wynosi: "<< Pc << endl;
    }
};
int main()
{
    Bryla * a = new Stozek, * b = new Walec, * c = new CzworoscianForemny, * d = new Prostopadloscian;
    
    a->pobierz_dane();
    a->objetosc();
    a->pole_powierzchni_calkowitej();
    b->pobierz_dane();
    b->objetosc();
    b->pole_powierzchni_calkowitej();
    c->pobierz_dane();
    c->objetosc();
    c->pole_powierzchni_calkowitej();
    d->pobierz_dane();
    d->objetosc();
    d->pole_powierzchni_calkowitej();
    delete a;
    delete b;
    delete c;
    delete d;
}