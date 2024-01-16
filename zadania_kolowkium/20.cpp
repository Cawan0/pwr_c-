#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int> &arr){
  for(int i=0;i<arr.size();i++){
    for(int o=0;o<arr.size();o++){
      if(arr[o]>arr[o+1]){
        int temp=arr[o];
        // cout<<temp<<endl; bez tej lini wywala blad dla 8 
        arr[o]=arr[o+1];
        arr[o+1]=temp;
      }
    }
  }
}

int main(){
  vector<int> arr(6);
  arr={2,5,1,4,8,4};
  sort(arr);
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<", ";
  }
}
