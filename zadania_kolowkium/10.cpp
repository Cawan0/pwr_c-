#include <iostream>
#include <cctype>

using namespace std;

int toUpperCase(string word){
  int count=0;
  for(int i=0;i<word.length();i++){
    if(word[i]!=toupper(word[i])){
      count++;
    }
    word[i]=toupper(word[i]);
  }
  return count;
}

int main(){
  string cos="Tak";
  string cos1="tEsToWy";
  string cos2="dWa SlowA";

  cout<<toUpperCase(cos)<<endl<<toUpperCase(cos1)<<endl<<toUpperCase(cos2);
}
