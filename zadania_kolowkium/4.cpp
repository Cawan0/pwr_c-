#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v(50);
  vector<int> indexMax;
  vector<int> indexMin;
  for(int i=0;i<v.size();i++){
    v[i]=rand()%50+50;
  }
  int max=v[0];
  int min=v[0];
  for(int i=0;i<v.size();i++){
    if(v[i]>max){
      max=v[i];
    }
    if(v[i]<min){
      min=v[i];
    }
  }
  for(int i=0;i<v.size();i++){
    if(v[i]==max) indexMax.push_back(i);
    if(v[i]==min) indexMin.push_back(i);
  }
  cout<<"min: "<<min<<" na miejscach: ";
  for(int i=0;i<indexMax.size();i++){
    cout<<indexMax[i];
    if(i!=indexMax.size()-1){
      cout<<", ";
    }
  }
  cout<<endl<<"max: "<<max<<" na miejscach: ";
  for(int i=0;i<indexMin.size();i++){
    cout<<indexMin[i];
    if(i!=indexMin.size()-1){
      cout<<", ";
    }
  }
}
