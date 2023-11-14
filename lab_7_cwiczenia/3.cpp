#include <iostream>
#include <array>

using namespace std;

void losoweWartosci(float tab[], int size){
    for(int i=0;i<size;i++){
    tab[i]=rand()%100;
    }
}

void wypisz_tab(float tab[], int size){
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

void wypisz_wszystko(float x[],float y[],float z[],int size){
        cout<<"Tabela 1:              Tabela 2:             Tabela 3:"<<endl;
        for(int i=0;i<size;i++){
            if(i>9){
                cout<<"Tab["<<i<<"] = "<<x[i]<<"           Tab["<<i<<"] = "<<y[i]<<"          Tab["<<i<<"] = "<<z[i]<<endl;
            }else if(i<9){
                cout<<"Tab["<<i<<"] = "<<x[i]<<"            Tab["<<i<<"] = "<<y[i]<<"           Tab["<<i<<"] = "<<z[i]<<endl;
            }

        }
}

void wczytaj_tab(float tab[], int size){
    cout<<"1. Wczytanie konkretnej liczby z tabeli"<<endl;
    cout<<"2. Wczytanie calej tabeli"<<endl;
    cout<<"3. Wczytanie losowych wartosci dla calej tabeli"<<endl;
    int x,y,z;
    cout<<"Wybierz opcje: ";
    cin>>x;

    switch(x){
        case 1:
            cout<<"Wpisz index w liczby ktor¹ chcesz zmienic: ";
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

void suma_tab(float x[],float y[],float z[],int size){
    for(int i=0;i<size;i++){
        z[i]=x[i]+y[i];
    }
}

void roznica_tab(float x[],float y[],float z[],int size){
    for(int i=0;i<size;i++){
        z[i]=x[i]-y[i];
    }
}

int main(){
    float tab1[15], tab2[15], tab3[15];
    int size = sizeof(tab1)/sizeof(tab1[0]);
    int x=0;
    losoweWartosci(tab1,size);
    losoweWartosci(tab2,size);
    losoweWartosci(tab3,size);
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
                    wypisz_tab(tab1,size);
                }else if(y==2){
                    wypisz_tab(tab2,size);
                }else if(y==3){
                    wypisz_tab(tab3,size);
                }else if(y==4){
                    wypisz_wszystko(tab1,tab2,tab3,size);
                }
            break;
            case 2:
                cout<<"1. Tabela 1"<<endl<<"2. Tabela 2"<<endl<<"3. Tabela 3"<<endl;
                cout<<"Wybierz tabele do wczytywania wartosci: ";
                cin>>y;
                if(y==1){
                    wczytaj_tab(tab1,size);
                }else if(y==2){
                    wczytaj_tab(tab2,size);
                }else if(y==3){
                    wczytaj_tab(tab3,size);
                }
            break;
            case 3:
                suma_tab(tab1,tab2,tab3,size);
            break;
            case 4:
                roznica_tab(tab1,tab2,tab3,size);
            break;
        }
    }
}
