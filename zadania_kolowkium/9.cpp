#include <iostream>
#include <vector>

using namespace std;

int check(const vector<int> &numbers){
  int maxNumber=numbers[0];
  for (int i=0;i<numbers.size();i++) {
    if(numbers[i]>maxNumber){
      maxNumber=numbers[i];
    }
  }
  return maxNumber;
}

int main(){
  vector<int> numbers(30);
  for(int i=0;i<numbers.size();i++){
    numbers[i]=rand()%30+10;
  }
  cout<<check(numbers);
}
