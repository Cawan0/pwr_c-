#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=100;i++){
        cout<<endl;
        for(int o=1;o<=100;o++){
            cout<<i<<"x"<<o<<"="<<i*o<<endl;
        }
        cout<<endl;
    }

    return 0;
}