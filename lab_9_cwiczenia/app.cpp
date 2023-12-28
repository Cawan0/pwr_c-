#include <iostream>
#include <vector>
#include <string>
#include <string.h>

using namespace std;

struct cell{
    int id;
    string marka;
    string model;
    int rok_produkcji;
    string vin;
    float cena;
    bool dostepny;
};
void fillCell(cell &cells,int id,int price){
    cells.id = id;
    cells.marka="Opel";
    cells.model="Astra";
    cells.rok_produkcji=2000;
    cells.vin="WBAWC73578E067076";
    cells.cena = 6523.80+price;
    cells.dostepny=1;
}
void showCells(cell &cells){
    cout<< "id: "<<cells.id <<endl;
    cout<< "marka: "<<cells.marka <<endl;
    cout<< "model: "<<cells.model <<endl;
    cout<< "rok produkcji: "<<cells.rok_produkcji <<endl;
    cout<< "vin: "<<cells.vin <<endl;
    cout<< "cena: "<<cells.cena <<endl;
    cout<< "dostepn: "<<cells.dostepny <<endl<<endl;
}
vector<cell> searchByPrice(vector<cell> &cells,int priceL,int priceM){
    vector<cell> filtered;
    for(int i=0;i<cells.size();i++){
        if(cells[i].cena>=priceL && cells[i].cena<=priceM){
            filtered.push_back(cells[i]);
        }
    }
    return filtered;
}

int main()
{
    int x,y;
    vector<cell> cells(100);
    for(int i=0;i<cells.size();i++){
        fillCell(cells[i], i+1,i);
        //showCells(cells[i]);
    }
    cout<<"Wpisz kwote minimalna: ";
    cin>>x;
    cout<<"Wpisz kwote maksymalna: ";
    cin>>y;
    vector<cell> filtered = searchByPrice(cells,x,y); //do poprawy
    for (int i = 0; i < filtered.size(); i++) {
      showCells(filtered[i]);
    }
    return 0;
}
