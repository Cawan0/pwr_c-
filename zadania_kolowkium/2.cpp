#include <iostream>

using namespace std;

int main(){
  int tab[10][10];

  for(int i=1;i<=9;i++){
    for(int o=1;o<=9;o++){
      tab[i][o]=i*o;
    }
  }
  for(int i=1;i<=9;i++){
    for(int o=1;o<=9;o++){
      if(tab[i][o]<10){
        cout<<" ";
      }
      cout<<tab[i][o]<<" ";
    }
    cout<<endl;
  }

}
