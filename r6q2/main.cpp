#include <iostream>
#include "TelevisaoTeste.h"

using namespace std;

int main()
{
    int n=-1, i, canal, som;
    TelevisaoTeste  tvTeste=TelevisaoTeste();


    while(n!=0){

        tvTeste.menu();

        cin>>n;

        if(n==0){
            cout<<"Adeus...\n";
            return 0;
        }


        switch(n){

            case 1:
                tvTeste.listar();
                break;
            case 2:
                cout<<"Digite o indice da televisao que deseja: ";
                cin>>i;
                cout<<"Digite o canal: ";
                cin>>canal;
                tvTeste.tv[i].setCanal(canal);
                break;
            case 3:
                cout<<"Digite o indice da televisao que deseja: ";
                cin>>i;
                cout<<"Digite o volume: ";
                cin>>som;
                tvTeste.tv[i].setSom(som);
                break;

            case 4:
                cout<<"Digite o indice da televisao que deseja: ";
                cin>>i;
                tvTeste.tv[i].avancarCanal();
                break;
            case 5:
                cout<<"Digite o indice da televisao que deseja: ";
                cin>>i;
                tvTeste.tv[i].avancarSom();
                break;
        }
    }

    return 0;
}
