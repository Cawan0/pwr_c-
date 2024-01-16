#include <iostream>
#include <cctype>

using namespace std;

int upperCaseCount(const char array[],int size){
  int count=0;
  for(int i=0;i<size;i++){
    if(array[i]==toupper(array[i]) && int(array[i])!=32){
      count++;
    }
  }
  return count;
}

int main(){
  int size=12;
  char arr[size] = "jAkiEs slOwo";
  cout<<upperCaseCount(arr,size);
}
