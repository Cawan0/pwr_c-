#include <iostream>
#include <string>
#include <vector>

using namespace std;

void tabInit(vector<float> &tab, int size){
    for(int i=0;i<size;i++){
        tab.push_back(0);
    }
}

void losoweWartosci(vector<float> &tab){
    for(int i=0;i<tab.size();i++){
        tab[i]=rand()%100;
    }
}

void wyswietl(vector<float> &tab){
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
            for(int i=0;i<tab.size();i++){
            cout<<"Tab["<<i<<"] = "<<tab[i]<<endl;
            }
        break;
    }
}

void wczytaj(vector<float> &tab){
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
            cout<<endl<<"Wpisz nowa wartosc: ";
            cin>>z;
            tab[y]=z;
        break;
        case 2:
            for(int i=0;i<tab.size();i++){
                cout<<"Tab["<<i<<"] = ";
                cin>>z;
                tab[i]=z;
            }
        break;
        case 3:
            losoweWartosci(tab);
        break;
    }
}

void sumaElementow(vector<float> &tab){
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

void sredniaWartosc(vector<float> &tab){
    float avg=0;
    for(int i=0;i<=tab.size();i++){
        avg+=tab[i];
    }
    avg=avg/tab.size();
    cout<<"Wartosc srednia to: "<<avg<<endl;
}

void ekstrema(vector<float> &tab){
    float bottom=tab[0],top=tab[0];
    int size=tab.size();
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

void zliczanie(vector<float> &tab){
    int minus=0,zero=0,plus=0;
    for(int i=0;i<tab.size();i++){
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
    vector<float> tab1;
    int x=0;
    cout<<"Wybierz wielkosc tablicy: ";
    cin>>x;
    cout<<endl;
    tabInit(tab1, x);
    x=0;
    
    losoweWartosci(tab1);
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
                wyswietl(tab1);
            break;
            case 2:
                wczytaj(tab1);
            break;
            case 3:
                sumaElementow(tab1);
            break;
            case 4:
                sredniaWartosc(tab1);
            break;
            case 5:
                ekstrema(tab1);
            break;
            case 6:
                zliczanie(tab1);
            break;
        }
    }
}
