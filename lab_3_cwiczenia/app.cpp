#include <iostream>
#include <math.h>
#include <conio.h>

#define KEY_LEFT 75
#define KEY_RIGHT 77

using namespace std;


void f1(){
    int x,i;
    float y=0;
    float z=1;
    for(i=1; i<=rand()%10; i++){
        cout<<"Wpisz "<<i<<" liczbe: ";
        cin>>x;
        cout<<endl;
        y+=x;
        z*=x;
    }
    cout<<"Suma wynosi: "<<y<<endl;
    cout<<"Iloczyn wynosi: "<<z<<endl;
    cout<<"Wartosc srednia: "<<y/(i-1)<<endl;
}

void f2(){
    float x;

    cout<<"Wpisz wzrost: ";
    cin>>x;

    if(x<150){
        cout<<"Jestes niski"<<endl;
    }else if(x>=150 && x<180){
        cout<<"Jestes sredniego wzrostu"<<endl;
    }else{
        cout<<"Jestes wysoki"<<endl;
    }
}

void f3(){
    char x;

    cout<<"Wpisz znak: ";
    x=getch();
    cout<<x<<endl;
    x=static_cast<int>(x);

    if(x>=48 && x<=57){
        cout<<"Znak to cyfra"<<endl;
    }else if(x>=65 && x<=90){
        cout<<"Znak to duza litera"<<endl;
    }else if(x>=97 && x<=122){
        cout<<"Znak to mala litera"<<endl;
    }else if(x==13){
        cout<<"Wcisniety przycisk to ENTER"<<endl;
    }else if(x==27){
        cout<<"Wcisniety przycisk to ESC"<<endl;
    }else if(x==KEY_LEFT){
        cout<<"Wcisniety przycisk to strzlka w lewo"<<endl;
    }else if(x==KEY_RIGHT){
        cout<<"Wcisniety przycisk to strzlka w prawo"<<endl;
    }else{
        cout<<"Pozostale klawisze"<<endl;
    }

}

void f4(){
    int x;

    cout<<"Wprowadz dlugosc lini: ";
    cin>>x;
    cout<<endl;

    for(int i=1; i<=x; i++){
        cout<<"-";
    }
    cout<<endl;
}

void f5(){
    char x;
    int y=0;
    int z=0;

    cout<<"Wpisz litery: ";

    while(x!=107){
        x=static_cast<int>(getch());
        if(x>=65 && x<=90){
            z++;
        }
        y++;
    }
    cout<<endl<<"Podanych znakow: "<<y<<endl;
    cout<<"Duzych liter: "<<z<<endl;

}

void f6(){
    float x;
    int i=0;
    float max_x=-91231239817423947;
    float min_x=34634534545345345;
    float y=0;
    char a;
    bool t=true;


    while(t){
        cout<<"Wpisz liczbe: ";
        cin>>x;
        cout<<"Czy zokonczyc wprowadzanie liczb T/N"<<endl;
        a=static_cast<int>(getch());
        if(a==84 || a==116){
            t=false;
        }
        if(x>max_x){
            max_x=x;
        }
        if(x<min_x){
            min_x=x;
        }
        y+=x;
        i++;

        system("cls");
    }
    cout<<"Srednia: "<<y/i<<endl;
    cout<<"Najwyzsza wartosc: "<<max_x<<endl;
    cout<<"Najnizsza wartosc: "<<min_x<<endl;

}

void f7(){
    float s,n;

    cout<<"Wpisz n: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        s+=(1.0/i);
    }

    cout<<"Suma ciagu: "<<s<<endl;
}


void f8(){
    int o;

    cout<<"Wpisz wysokosc choinki: ";
    cin>>o;

    cout<<endl;

    for(int i=1;i<=(2*o)-2;i+=2){
//            cout<<i<<endl;
        if(i==1){
            for(int l=1;l<=o+1;l++){
                cout<<" ";
            }
            cout<<"*"<<endl;
        }
        for(int l=1;l<=o-i/2;l++){
            cout<<" ";
        }
        for(int p=1;p<=i+2;p++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    char z;
    int x;

    system("color a");

    do{
        system("cls");
        cout<<"1. Program wczytuj¹cy kilka liczb z klawiatury, a nastêpnie obliczaj¹cy i wyœwietlaj¹cy na ekranie ich sumê, iloczyn, itp."<<endl;
        cout<<"2. Program klasyfikuj¹cy wzrost osób"<<endl;
        cout<<"3. Program klasyfikuj¹cy klawisze naciskane na klawiaturze"<<endl;
        cout<<"4. Program rysuj¹cy na ekranie poziom¹ kreskê (ze znaków minus) o d³ugoœci zadawanej z klawiatury"<<endl;
        cout<<"5. Program wczytuj¹cy znaki z klawiatury a¿ do momentu naciœniêcia klawisza 'k'."<<endl;
        cout<<"6. Program wczytuj¹cy liczby z klawiatury, z jednoczesnym zadawaniem pytania 'Czy koniec wprowadzania T/N ?' "<<endl;
        cout<<"7. Program wyznaczaj¹cy iteracyjnie (numerycznie) sumê szeregu: 1/n"<<endl;
        cout<<"8. Program wyœwietlaj¹cy na ekranie 'choinkê' o wysokoœci zadawanej z klawiatury"<<endl;



        cout<<endl;
        cout<<"ESC - Exit"<<endl;

        cout<<endl;
        cout<<"Wybierz opcje: ";

        z=getch();
        x=static_cast<int>(z);

        system("cls");

        switch(x){
        case 49:
            f1();
            break;
        case 50:
            f2();
            break;
        case 51:
            f3();
            break;
        case 52:
            f4();
            break;
        case 53:
            f5();
            break;
        case 54:
            f6();
            break;
        case 55:
            f7();
            break;
        case 56:
            f8();
            break;
        default:

            break;
        }
    system("pause");
    }while(z!=27);

    return 0;
}

