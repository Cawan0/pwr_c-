#include <iostream>

using namespace std;

int main()
{
    int x;
    double s=1;

    cout<<"Wpisz jaka liczba ma podlegac dzialaniu: ";
    cin>>x;

    for(int i=1;i<=x;i++){
        s*=i;
    }

    cout<<s<<endl;

    return 0;
}