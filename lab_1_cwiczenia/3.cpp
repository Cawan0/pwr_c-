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

    t=y-x;

    for(int i=1;i<=t;i++){
        if(i%2==0){
            cout<<x<<endl;
        }
        x++;
    }


    return 0;
}