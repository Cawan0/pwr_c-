#include <iostream>

using namespace std;

struct student{
  int album;
  string wydzial;
  string kierunek;
  int semestr;
};

void show(const student &student){
  cout<<"Wydzial: "<<student.wydzial<<endl;
  cout<<"Kierunek: "<<student.kierunek<<endl;
  cout<<"Semestr: "<<student.semestr<<endl;
  cout<<"Album: "<<student.album<<endl;

}

int main(){
  student maciek;
  maciek.album=2;
  maciek.wydzial="zarzadzanie";
  maciek.kierunek="zarzadzanie";
  maciek.semestr=3;
  show(maciek);
}
