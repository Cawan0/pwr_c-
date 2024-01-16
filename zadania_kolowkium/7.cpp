#include <iostream>

using namespace std;

int suma(int x,int y=2,int z=6){
  return x+y+z;
}

int main(){
  int x,y,z;
  cout<<"Wpisz 3 liczby: "<<endl;
  cout<<"1: ";
  cin>>x;
  cout<<"2: ";
  cin>>y;
  cout<<"3: ";
  cin>>z;

  cout<<"Wersja z jedna zmienna: "<<suma(x)<<endl;
  cout<<"Wersja z dwoma zmiennymi: "<<suma(x,y)<<endl;
  cout<<"Wersja z trzema zmiennymi: "<<suma(x,y,z)<<endl;
}
