#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

struct coordTmp{
float x;
float y;
float range;
};

void fillVector(vector<coordTmp> &coord){
    for(int i=0;i<coord.size();i++){
        coord[i].x = rand()%20;
        coord[i].y = rand()%20;
    }
}

void range(vector<coordTmp> &coord){
    for(int i=0;i<coord.size();i++){
        coord[i].range=sqrt(pow(coord[i].x,2)+pow(coord[i].y,2));
    }
}

void showCoord(vector<coordTmp> &coord){
    for(int i=0;i<coord.size();i++){
        cout<<"x: "<<coord[i].x<<endl;
        cout<<"y: "<<coord[i].y<<endl;
        cout<<"range: "<<coord[i].range<<endl;
        cout<<endl;
    }
}

int main(){
    int n;
    cout << "Podaj wielkosc wektora: " << endl;
    cin>>n;
    vector<coordTmp> coord(n);
    fillVector(coord);
    range(coord);
    showCoord(coord);
    return 0;
}
