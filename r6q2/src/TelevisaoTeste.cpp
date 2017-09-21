#include "TelevisaoTeste.h"

TelevisaoTeste::TelevisaoTeste()
{
    int i;
    for(i=0;i<0;i++){
        tv[i]=Televisao();
    }
}

void TelevisaoTeste::menu(){
    cout<<"--------MENU--------\n";
    cout<<"(0) - Sair\n";
    cout<<"(1) - Listar os televisores\n";
    cout<<"(2) - selecionar canal\n";
    cout<<"(3) - selecionar som\n";
    cout<<"(4) - avancar canal\n";
    cout<<"(5) - avancar som\n";
}
void TelevisaoTeste::listar(){
        int i;

    for(i=0;i<5;i++){
        cout<<"televisao #"<<i<<" ";
        tv[i].toString();
        cout<<endl;

    }
}
TelevisaoTeste::~TelevisaoTeste()
{
    //dtor
}
