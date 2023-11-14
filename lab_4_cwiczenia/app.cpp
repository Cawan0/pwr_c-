#include <iostream>

using namespace std;
/*
void zeruj_1 ( double a, double b )
{
    cout << " PRZED: Zmienna a= " << a << " zmienna b= " << b <<endl;
    a = 0;
    b = 0;
    cout << " PO: Zmienna a= " << a << " zmienna b= " << b <<endl;
}

void zeruj_2 ( double &a, double &b )
{
    cout << " PRZED: Zmienna a= " << a << " zmienna b= " << b <<endl;
    a = 0;
    b = 0;
    cout << " PO: Zmienna a= " << a << " zmienna b= " << b <<endl;
}

void zeruj_3 ( double* a, double* b )
{
    cout << " PRZED: Zmienna a= " << a << " zmienna b= " << b <<endl;
    //a = 0;
    *a = 0;
    *b = 0;
    cout << " PO: Zmienna a= " << a << " zmienna b= " << b <<endl;
}
*/

void wyswietlPrzezWartosc(double a)
{
    cout << "\n Wyswietl przez wartosc: \n";
    cout << "a: " << a << "   &a: " << &a << endl;
}

void wyswietlReferencje(double &a)
{
    cout << "\n Wyswietl referencje: \n";
    cout << "a: " << a << "   &a: " << &a << endl;
}

void wyswietlWskaznik(double* a)
{
    cout << "\n Wyswietl wskaznik: \n";
    cout << "*a: " << *a << "   a: " << a << "   &a: " << &a << endl;
}

void adresy(double a, double& b, double* c){
    cout << "\n Adresy przez:  liczbe, referencje, wskaznik\n";
    cout << "&a: " << &a << "   &b: " << &b << "   &c: " << &c << endl;
}

int main( void )
{
    double x=7, y=5;
    cout << "x: " << x << "   &x: " << &x << endl;
    wyswietlPrzezWartosc(x);
    wyswietlReferencje(x);
    wyswietlWskaznik(&x);
    adresy(x, x, &x);

/*
    cout << " PRZED: Zmienna x= " << x << " zmienna y= " << y <<endl;
    //zeruj_1( x, y );
    //zeruj_2( x, y );
    zeruj_3( &x, &y );
    cout << " PO: Zmienna x= " << x << " zmienna y= " << y <<endl;
*/
}
