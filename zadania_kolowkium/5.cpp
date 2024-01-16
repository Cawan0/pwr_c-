#include <iostream>
#include <vector>

using namespace std;

int even_check(vector<int> &v){
  int even=0;
  for(int i=0;i<v.size();i++){
    if(v[i]%2==0){
      even++;
    }
  }
  return even;
}

int main(){
  vector<int> v(50);
  for(int i=0;i<v.size();i++){
    v[i]=rand()%50+50;
  }
  cout<<"Ilosc liczb parzystych w vectorze: "<<even_check(v);

}
