#include <iostream>
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

void wypisz(vector<float> &tab){
    cout<<"1. Wyswietla konkretna liczbe z tabeli"<<endl;
    cout<<"2. Wyswietla cala tabele"<<endl;
    int x,y;
    cout<<"Wybierz opcje: ";
    cin>>x;

    switch(x){
        case 1:
            cout<<"Wpisz index liczby ktora chcesz wyswietlic: ";
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

void wypisz_wszystko(vector<float> &x,vector<float> &y,vector<float> &z){
        cout<<"Tabela 1:              Tabela 2:             Tabela 3:"<<endl;
        for(int i=0;i<x.size();i++){
            if(i>9){
                cout<<"Tab["<<i<<"] = "<<x[i]<<"           Tab["<<i<<"] = "<<y[i]<<"          Tab["<<i<<"] = "<<z[i]<<endl;
            }else if(i<9){
                cout<<"Tab["<<i<<"] = "<<x[i]<<"            Tab["<<i<<"] = "<<y[i]<<"           Tab["<<i<<"] = "<<z[i]<<endl;
            }

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
            cout<<"Wpisz index w liczby ktora chcesz zmienic: ";
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

void suma_tab(vector<float> &x,vector<float> &y,vector<float> &z){
    for(int i=0;i<x.size();i++){
        z[i]=x[i]+y[i];
    }
}

void roznica_tab(vector<float> &x,vector<float> &y,vector<float> &z){
    for(int i=0;i<x.size();i++){
        z[i]=x[i]-y[i];
    }
}

int main(){
    vector<float> tab1;
    vector<float> tab2;
    vector<float> tab3;
    int x=0;
    cout<<"Wybierz wielkosc tablic: ";
    cin>>x;
    cout<<endl;
    tabInit(tab1, x);
    tabInit(tab2, x);
    tabInit(tab3, x);
    x=0;
    losoweWartosci(tab1);
    losoweWartosci(tab2);
    losoweWartosci(tab3);
    while(x!=9){
        cout<<"1. Wyswietlanie zawartosci tabeli"<<endl;
        cout<<"2. Wczytywanie wartosci do tabeli"<<endl;
        cout<<"3. Suma elementow tablicy"<<endl;
        cout<<"4. Roznica elementow tablicy"<<endl;

        cout<<endl<<"9. Zakoncz dzialanie programu"<<endl;
        cout<<"Wybierz opcje: ";
        cin>>x;

        int y=0;
        switch(x){
            case 1:
                cout<<"1. Tabela 1"<<endl<<"2. Tabela 2"<<endl<<"3. Tabela 3"<<endl<<"4. Wypisz wszystko"<<endl;
                cout<<"Wybierz tabele do wyswietlenia: ";
                cin>>y;
                if(y==1){
                    wypisz(tab1);
                }else if(y==2){
                    wypisz(tab2);
                }else if(y==3){
                    wypisz(tab3);
                }else if(y==4){
                    wypisz_wszystko(tab1,tab2,tab3);
                }
            break;
            case 2:
                cout<<"1. Tabela 1"<<endl<<"2. Tabela 2"<<endl<<"3. Tabela 3"<<endl;
                cout<<"Wybierz tabele do wczytywania wartosci: ";
                cin>>y;
                if(y==1){
                    wczytaj(tab1);
                }else if(y==2){
                    wczytaj(tab2);
                }else if(y==3){
                    wczytaj(tab3);
                }
            break;
            case 3:
                suma_tab(tab1,tab2,tab3);
            break;
            case 4:
                roznica_tab(tab1,tab2,tab3);
            break;
        }
    }
}
