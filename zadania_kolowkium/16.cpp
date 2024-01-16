#include <iostream>
#include <cmath>

using namespace std;

int suma(string number,int i){
  int result;
    if(i==number.length()){
      return 0;
    }
    result=number[i]-48;

  return result+=suma(number,++i);
}

int main(){
  string number;
  cin>>number;
  cout<<suma(number,0);
}
