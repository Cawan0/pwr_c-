#include <iostream>
#include <math.h>


using namespace std;

void f1(){
    int x,y,t;
    cout<<"Wpisz dolna granice zakresu: ";
    cin>>x;
    cout<<"Wpisz gorna granice zakresu: ";
    cin>>y;

    if(x>y){
        t=x;
        x=y;
        y=t;
    }

    t=(y-x)+1;

    float sum=0;
    while(x<=y){
        sum+=x;
        x++;
    }

    cout<<endl;
    cout<<"Suma: "<<sum<<endl;
    cout<<"Wartosc srednia: "<<sum/t<<endl;
}

void f2(){
    int x,i;
    float y;
    for(i=1; i<=10; i++){
        cout<<"Wpisz "<<i<<" liczbe: ";
        cin>>x;
        cout<<endl;
        y+=x;
    }
    cout<<"Suma wynosi: "<<y<<endl;
    cout<<"Wartosc srednia: "<<y/(i-1)<<endl;
}

void f3(){
    for(int i=1; i<=10; i++){
        cout<<i<<". "<<rand()%100<<endl;
    }

}

void f4(){
    for(int i=1; i<=10; i++){
        cout<<i<<" rzut:"<<endl;
        cout<<endl;
        for(int o=1; o<=2; o++)
        {
            cout<<o<<" kosc: "<<(rand()%5)+1<<endl;
        }
        cout<<endl;
    }
}

void f5(){
    int x,y;

    cout<<"Zakres piewszej liczy iloczynu: ";
    cin>>x;
    cout<<endl<<"Zakres drugeiej liczby iloczynu: ";
    cin>>y;
    cout<<endl;

    for(int i=1; i<=x; i++){
        cout<<endl;
        for(int o=1; o<=y; o++)
        {
            cout<<i<<"x"<<o<<"="<<i*o<<endl;
        }
        cout<<endl;
    }
}

void f6(){
    int x;
    double s=1;

    cout<<"Wpisz jaka liczba ma podlegac dzialaniu: ";
    cin>>x;

    for(int i=1; i<=x; i++){
        s*=i;
    }

    cout<<s<<endl;
}

void f7(){
    int x=0;
    int y=1;

    for(int i=1; i<=10; i++){

        cout<<i<<". ";
        if(x<y){
            x+=y;
            cout<<x<<endl;
        }
        else if(y<=x){
            y+=x;
            cout<<y<<endl;
        }
    }
}

void f8(){
    double a,b,t,p,ax,bx,tx,px;

    a=1;
    b=1.0/(sqrt(2));
    t=1.0/4;
    p=1;

        ax=a;
        bx=b;
        tx=t;
        px=p;

        a=(ax+bx)/2;
        b=sqrt(ax*bx);
        t=tx-px*pow((ax-a),2);
        p=2*px;

        //cout<<"a: "<<a<<", b: "<<b<<", t: "<<t<<", p: "<<p<<endl;
        //cout<<"ax: "<<ax<<", bx: "<<bx<<", tx: "<<tx<<", px: "<<px<<endl;


        cout<<pow((a+b),2)/(4*t)<<endl;

}


int main(){
    int x;

    system("color a");

    while(true){
        system("cls");
        cout<<"1. Program obliczajacy sume i wartosc srednia liczb z zadanego zakresu"<<endl;
        cout<<"2. Program obliczajacy sume i wartosc srednia 10 wprowadzonych liczb"<<endl;
        cout<<"3. Program wyswietlajacy 10 losowych liczb z zakresu 1 do 100"<<endl;
        cout<<"4. Program symulujacy 10-krotny rzut dwoma kosciami do gry"<<endl;
        cout<<"5. Program wyswietlajacy na ekranie tabliczke mnozenia"<<endl;
        cout<<"6. Program obliczajacy wartosc wyrayenia n!"<<endl;
        cout<<"7. Program wyswietlajacy 10 piewszych liczb ciagu Fibonacciego"<<endl;
        cout<<"8. Program wyswietlajacy wartosc pi"<<endl;



        cout<<endl;
        cout<<"10. Exit"<<endl;

        cout<<endl;
        cout<<"Wybierz opcje: ";
        cin>>x;
        cout<<endl;

        switch(x){
        case 1:
            f1();
            break;
        case 2:
            f2();
            break;
        case 3:
            f3();
            break;
        case 4:
            f4();
            break;
        case 5:
            f5();
            break;
        case 6:
            f6();
            break;
        case 7:
            f7();
            break;
        case 8:
            f8();
            break;
        case 10:
            return false;
            break;
        default:

            break;
        }

        system("pause");
    }

    return 0;
}
