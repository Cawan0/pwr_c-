#include <iostream>
#include <string>
#include <array>

using namespace std;

void losoweWartosci(float tab[], int size){
    for(int i=0;i<size;i++){
    tab[i]=rand()%100;
    }
}

void wyswietl(float tab[], int size){
    cout<<"1. Wyswietla konkretna liczbe z tabeli"<<endl;
    cout<<"2. Wyswietla cala tabele"<<endl;
    int x,y;
    cout<<"Wybierz opcje: ";
    cin>>x;

    switch(x){
        case 1:
            cout<<"Wpisz index w liczby ktora chcesz wyswietlic: ";
            cin>>y;
            cout<<endl<<"Tab["<<y<<"] = "<<tab[y]<<endl;
        break;
        case 2:
            for(int i=0;i<size;i++){
            cout<<"Tab["<<i<<"] = "<<tab[i]<<endl;
            }
        break;
    }
}

void wczytaj(float tab[], int size){
    cout<<"1. Wczytanie konkretnej liczby z tabeli"<<endl;
    cout<<"2. Wczytanie calej tabeli"<<endl;
    cout<<"3. Wczytanie losowych wartosci dla calej tabeli"<<endl;
    int x,y,z;
    cout<<"Wybierz opcje: ";
    cin>>x;

    switch(x){
        case 1:
            cout<<"Wpisz index w liczby ktorą chcesz zmienic: ";
            cin>>y;
            --y;
            cout<<endl<<"Wpisz nowa wartosc: ";
            cin>>z;
            tab[y]=z;
        break;
        case 2:
            for(int i=0;i<size;i++){
                cout<<"Tab["<<i<<"] = ";
                cin>>z;
                tab[i]=z;
            }
        break;
        case 3:
            losoweWartosci(tab,size);
        break;
    }
}

void sumaElementow(float tab[], int size){
       int x,y,suma=0;
       cout<<"Suma ilu elementow: ";
       cin>>x;
       for(int i=1;i<=x;i++){
        cout<<"Wpisz inedx "<<i<<" elementu: " ;
        cin>>y;
        suma+=tab[y];
       }
       cout<<"Suma: "<<suma<<endl;
}

void sredniaWartosc(float tab[],int size){
    float avg=0;
    for(int i=0;i<=size;i++){
        avg+=tab[i];
    }
    avg=avg/size;
    cout<<"Wartosc srednia to: "<<avg<<endl;
}

void ekstrema(float tab[],int size){
    float bottom=tab[0],top=tab[0];
    for(int i=0;i<=(size/2);i++){
        if(top<tab[i] || top<tab[size-i]){
            top=max(tab[i],tab[(size-1)-i]);
        }
        if(bottom>tab[i] || bottom>tab[(size-1)-i]){
            bottom=min(tab[i],tab[(size-1)-i]);
        }
    }
    cout<<"Wartosc maksymalna: "<<top<<endl<<"Wartosc minimalna: "<<bottom<<endl;
}

void zliczanie(float tab[],int size){
    int minus=0,zero=0,plus=0;
    for(int i=0;i<size;i++){
        if(tab[i]<0){
            minus++;
        }else if(tab[i]==0){
            zero++;
        }else if(tab[i]>0){
            plus++;
        }
    }
    cout<<"Liczb ujemnych w tabeli: "<<minus<<endl<<"Liczby zerowych w tabeli: "<<zero<<endl<<"Liczb dodatnich w tabeli: "<<plus<<endl;
}

int main(){
    float tab1[15];
    int size = sizeof(tab1)/sizeof(tab1[0]);
    int x=0;
    losoweWartosci(tab1,size);
    while(x!=9){
        cout<<"1. Wyswietlanie zawartosci tabeli"<<endl;
        cout<<"2. Wczytywanie wartosci do tabeli"<<endl;
        cout<<"3. Suma elementow tablicy"<<endl;
        cout<<"4. Srednia wartosc tabeli"<<endl;
        cout<<"5. Wartosc maksymalna i minimalna"<<endl;
        cout<<"6. Zliczanie wyrazow dodatnich, zerowych i ujemnych w tabeli"<<endl;
        cout<<endl<<"9. Zakoncz dzialanie programu"<<endl;
        cout<<"Wybierz opcje: ";
        cin>>x;

        switch(x){
            case 1:
                wyswietl(tab1,size);
            break;
            case 2:
                wczytaj(tab1,size);
            break;
            case 3:
                sumaElementow(tab1,size);
            break;
            case 4:
                sredniaWartosc(tab1,size);
            break;
            case 5:
                ekstrema(tab1,size);
            break;
            case 6:
                zliczanie(tab1,size);
            break;
        }
    }
}
