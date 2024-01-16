#include <iostream>

using namespace std;

struct zespol{
  double re;
  double im;
};

union sezam{
  int calkowita;
  double zmiennoprzecinkowa;
  zespol zespolona;
};

int main(){
  sezam a,b;
  a.calkowita=16;
  b.zmiennoprzecinkowa=6.3;
  cout<<"calkowita: "<<a.calkowita<<endl;
  cout<<"zmiennoprzecinkowa"<<b.zmiennoprzecinkowa<<endl;
  b.zespolona.im=6;
  b.zespolona.re=2;
  cout<<"zespolona: "<<b.zespolona.re<<"+"<<b.zespolona.im<<"i"<<endl;
}
