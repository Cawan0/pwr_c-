#include <iostream>

using namespace std;

struct zespol{
  double re;
  double im;
};

void show(const zespol &num){
  cout<<num.re<<"+"<<num.im<<"i";
}

int main(){
  zespol test;
  test.re=6.0/8.0;
  test.im=4.0/3.0;
  show(test);
}
