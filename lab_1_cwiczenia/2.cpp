#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"Wpisz dolna granice zakresu: ";
    cin>>x;
    cout<<"Wpisz gorna granice zakresu: ";
    cin>>y;

    if(x>y){
        int t=x;
        x=y;
        y=t;
    }

    while(x<=y){
    cout<<x<<endl;
    x++;
    }

    return 0;
}