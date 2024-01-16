#include <iostream>

using namespace std;

int main(){
  int tab[10];
  int x,y;

  cout<<"Wpisz zakres: "<<endl<<"dolny: ";
  cin>>x;
  cout<<"gorny: ";
  cin>>y;

  if(x>y){
    cout<<"zakres gorny jest mniejszy niz dolny";
    exit(0);
  }

  for(int i=0;i<=9;i++){
    tab[i]=rand()%(y-x)+x;
  }

  for(int i=0;i<=9;i++){
    cout<<tab[i];
    if(i!=9){
      cout<<", ";
    }
  }

}
