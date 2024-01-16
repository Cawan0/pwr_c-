#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<string> dane;
  string imie,nazwisko,calosc;
  for(int i=0;i<=4;i++){
    cout<<i+1<<"."<<endl;
    cout<<"Podaj imie: ";
    cin>>imie;
    cout<<"Podaj nazwisko: ";
    cin>>nazwisko;
    calosc=imie+" "+nazwisko;
    dane.push_back(calosc);
  }
  for(int i=0;i<dane.size();i++){
    cout<<dane[i]<<endl;
  }
}
