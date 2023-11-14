#include <iostream>

using namespace std;

int main()
{
    int x,y,t;
    cout<<"Wpisz dolna granice zakresu: ";
    cin>>x;
    cout<<"Wpisz gorna granice zakresu: ";
    cin>>y;

    if(x>y){
        t=x;
        x=y;
        y=t;
    }

    t=(y-x)+1;

    float sum=0;
    while(x<=y){
        sum+=x;
        x++;
    }

    cout<<"Suma: "<<sum<<endl;
    cout<<"Wartosc srednia: "<<sum/t<<endl;

    return 0;
}