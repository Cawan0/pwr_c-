#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> tab(5);
  int x;

  cout<<"Wprowadz 5 kolejnych liczb naturalnych z zakresu 1-20"<<endl;
  for(int i=0;i<tab.size();i++){
    cout<<i+1<<": ";
    cin>>x;
    if(x>20 || x<1){
      cout<<endl<<"Blednie wprowadzone dane"<<endl;
      exit(0);
    }
  }
  cout<<"Rozmiar vectora: "<<tab.size()<<endl;
  for(int i=0;i<tab.size();i++){
    tab[i]=0;
  }
  for(int i=0;i<tab.size();i++){
    cout<<i+1<<": "<<tab[i]<<endl;
  }
  return 0;
}
