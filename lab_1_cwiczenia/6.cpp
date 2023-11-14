#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=10;i++){
        cout<<i<<". "<<rand()%100<<endl;
    }

    return 0;
}