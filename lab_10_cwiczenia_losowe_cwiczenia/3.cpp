#include <iostream>
#include <vector>

using namespace std;

void fillVector(vector<int> &numbers){
    for(int i=0;i<numbers.size();i++){
        numbers[i]=(i*2)+1;
    }
}

void reversVector(vector<int> &numbers){
    vector<int> revers(numbers.size());
    for(int i=0;i<numbers.size();i++){
        revers[i]=numbers[numbers.size()-(i+1)];
    }
    for(int i=0;i<numbers.size();i++){
        numbers[i]=revers[i];
    }
}

void showVector(vector<int> &numbers){
    for(int i=0;i<numbers.size();i++){
        cout<<i<<": "<<numbers[i]<<endl;
    }
}

int main(){

int n;
cout<<"Wpisz dlugosc vectora: ";
cin>>n;

vector<int> numbers(n);

fillVector(numbers);
showVector(numbers);
cout<<endl;
reversVector(numbers);
showVector(numbers);

}
