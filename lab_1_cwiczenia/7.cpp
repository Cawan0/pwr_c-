#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=10;i++){
        cout<<i<<" rzut:"<<endl;
        cout<<endl;
        for(int o=1;o<=2;o++){
            cout<<o<<" kosc: "<<(rand()%5)+1<<endl;
        }
        cout<<endl;
    }

    return 0;
}