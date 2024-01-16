#include <iostream>

using namespace std;

int check(const string word,const string templ){
  int count=0;
  for(int i=0;i<word.length();i++){
    for(int o=0;o<templ.length();o++){
      if(word[i]==templ[o]) count++;
    }
  }
  return count;
}

int main(){
  string word="nie wiem, jakis testowe zanie!?";
  string templ=",.;:?'+-!";

  cout<<check(word,templ);
}
