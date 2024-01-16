#include <iostream>
#include <vector>

using namespace std;

int numberCheck(vector<int> &v, int x){
  int check=0;
  for(int i=0;i<v.size();i++){
    if(v[i]==x){
      check++;
    }
  }
  return check;
}

int main(){
  vector<int> v(50);
  int x;
  for(int i=0;i<v.size();i++){
    v[i]=rand()%20;
  }
  cout<<"Wpisz liczbe do sprawdznia: ";
  cin>>x;
  cout<<"Ilosc wpisanych liczb w vectorze: "<<numberCheck(v,x);
}
