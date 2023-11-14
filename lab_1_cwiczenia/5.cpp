#include <iostream>
#include <math.h>

using namespace std;

float a,b,c,x,y;
float delta;

int main()
{
    cout << "Wpisz wspolczynnik a: ";
    cin >> a;
    cout << "Wpisz wspolczynnik b: ";
    cin >> b;
    cout << "Wpisz wspolczynnik c: ";
    cin >> c;
    cout<<endl;

    delta=pow(b,2)-4*a*c;

    if(delta>0){
        x=(-b-sqrt(delta))/2*a;
        y=(-b+sqrt(delta))/2*a;
        cout<<"delta= "<<delta<<endl;
        cout<<endl;
        cout<<"x1= "<<x<<endl;
        cout<<endl;
        cout<<"x2= "<<y<<endl;
    }
    else if(delta==0){
        x=(-b)/2*a;
        cout<<"x0= "<<x<<endl;
    }
    else if(delta<0){
        cout<<"delta mniejsza od zera"<<endl;
    }
    return 0;
}