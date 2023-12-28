#include <iostream>

using namespace std;

void line(int length){
    for(int i=0;i<length;i++){
        cout<<"-";
    }
}

int main()
{
    int length;
    cout << "Wpisz dlugosc lini: " ;
    cin >> length;
    line(length);
    return 0;
}
