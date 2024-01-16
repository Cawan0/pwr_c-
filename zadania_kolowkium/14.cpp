#include <iostream>

using namespace std;

void drowLine(int nrLine,float height){
  int width=height/2;
  int temp=height;
  if(temp&2!=0) ++width;
  if(nrLine>height/2){
    for(int i=0;i<width-(height-nrLine)-1;i++){
      cout<<' ';
    }
    cout<<'*'<<endl;
    // cout<<nrLine<<' '<<height<<endl;
  }else if(nrLine==height/2){
    for(int i=0;i<width-(height-nrLine);i++){
      cout<<' ';
    }
    cout<<'*'<<endl;
  }else{
    // cout<<width-nrLine<<endl;
    for(int i=0;i<width-nrLine;i++){
      cout<<' ';
    }
    cout<<'*'<<endl;
  }
  // cout<<height-nrLine<<endl;

  --nrLine;
  if(nrLine!=0){
    drowLine(nrLine,height);
  }
}

int main(){
  int line;
  cin>>line;
  cout<<endl;
  drowLine(line,line);
}
