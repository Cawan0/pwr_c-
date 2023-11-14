#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

void f1(){
    for(int i=0;i<=10;i++){
    cout<<i<<endl;
    }
}

void f2()
{
    int x,y;
    cout<<"Wpisz dolna granice zakresu: ";
    cin>>x;
    cout<<"Wpisz gorna granice zakresu: ";
    cin>>y;

    if(x>y){
        int t=x;
        x=y;
        y=t;
    }

    while(x<=y){
    cout<<x<<endl;
    x++;
    }
}

void f3(){
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

    t=y-x;

    for(int i=1;i<=t;i++){
        if(i%2==0){
            cout<<x<<endl;
        }
        x++;
    }

}

void f4(){
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

void f5(){

    float a,b,c,x,y;
    float delta;

    cout << "Wpisz wspolczynnik a: ";
    cin >> a;
    cout << "Wpisz wspolczynnik b: ";
    cin >> b;
    cout << "Wpisz wspolczynnik c: ";
    cin >> c;
    cout<<endl;

    delta=pow(b,2)-4*a*c;

    if(delta>0){
        x=(-b-sqrt(delta))/2*a;
        y=(-b+sqrt(delta))/2*a;
        cout<<"delta= "<<delta<<endl;
        cout<<endl;
        cout<<"x1= "<<x<<endl;
        cout<<endl;
        cout<<"x2= "<<y<<endl;
    }
    else if(delta==0){
        x=(-b)/2*a;
        cout<<"x0= "<<x<<endl;
    }
    else if(delta<0){
        cout<<"delta mniejsza od zera"<<endl;
    }
}

void f6(){
    for(int i=1;i<=10;i++){
        cout<<i<<". "<<rand()%100<<endl;
    }

}

void f7(){
    for(int i=1;i<=10;i++){
        cout<<i<<" rzut:"<<endl;
        cout<<endl;
        for(int o=1;o<=2;o++){
            cout<<o<<" kosc: "<<(rand()%5)+1<<endl;
        }
        cout<<endl;
    }
}

void f8(){
    int x,y;

    cout<<"Zakres piewszej liczy iloczynu: ";
    cin>>x;
    cout<<endl<<"Zakres drugeiej liczby iloczynu: ";
    cin>>y;
    cout<<endl;    

    for(int i=1;i<=x;i++){
        cout<<endl;
        for(int o=1;o<=y;o++){
            cout<<i<<"x"<<o<<"="<<i*o<<endl;
        }
        cout<<endl;
    }
}

void f9(){
    int x;
    double s=1;

    cout<<"Wpisz jaka liczba ma podlegac dzialaniu: ";
    cin>>x;

    for(int i=1;i<=x;i++){
        s*=i;
    }

    cout<<s<<endl;
}

int main(){
    int x;
    while(true){
        system("cls");
        cout<<"1. Program wylwietlajacy liczby od 0 do 10"<<endl;
        cout<<"2. Program wyswietlajacy liczby z danego zakresu"<<endl;
        cout<<"3. Program wyswietlajacy co druga liczbe z zakresu"<<endl;
        cout<<"4. Program obliczajacy sume i wartosc srednia liczb z zadanego zakresu"<<endl;
        cout<<"5. Program wyliczajacy delte i miejsca zerowe trojmianu kwadratowego"<<endl;
        cout<<"6. Program wyswietlajacy 10 losowych liczb z zakresu 1 do 100"<<endl;
        cout<<"7. Program symulujacy 10-krotny rzut dwoma ko�ciami do gry"<<endl;
        cout<<"8. Program wyswietlajacy na ekranie tabliczke mnozenia"<<endl;
        cout<<"9. Program obliczajacy wartosc wyrayenia n!"<<endl;


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
            case 9:
                f9();
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

