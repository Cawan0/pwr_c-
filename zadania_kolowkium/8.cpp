#include <iostream>
#include <array>

using namespace std;

void swapNumbers(int tab[],int x,int y){
  int indexX,indexY;
  for(int i=0;i<20;i++){
    if(x==tab[i]) indexX=i;
    if(y==tab[i]) indexY=i;
  }
  tab[indexX]=y;
  tab[indexY]=x;
}

int main(){
  int tab[20];
  int x,y;
  for(int i=0;i<20;i++){
    tab[i]=i;
  }
  cout<<"Wpisz liczby do zmiany: "<<endl;
  cout<<"1: ";
  cin>>x;
  cout<<"2: ";
  cin>>y;

  swapNumbers(tab,x,y);

  for(int i=0;i<20;i++){
    cout<<tab[i]<<" ";
  }

}
