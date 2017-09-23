#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    int i;

    for(i=0 ; i<5 ; i++){
        mesas[i]= new MesaDeRestaurante();
    }
}
void RestauranteCaseiro::adicionaAoPedido(){

    int mesa, numero, quantidade;
    float preco;
    std::string descricao;

    cout<<"Digite o numero: ";
    cin>>numero;
    cout<<"Digite a quantidade: ";
    cin>>quantidade;
    cout<<"Digite o preco: ";
    cin>>preco;
    cout<<"Digite o descricao: ";
    cin>>descricao;
    cout<<"Em qual mesa deseja adicionar o pedido?: ";
    cin>>mesa;

    mesas[mesa]->adicionaAoPedido(numero, quantidade, preco, descricao);
}
void RestauranteCaseiro::calculaTotalRestaurante(){
    int i;
    float total=0;

    for(i=0 ; i<5 ; i++){
        cout<<"mesa #"<<i;
        total += mesas[i]->calculaTotal();
    }

    cout<<"Total apurado = "<<total<<endl;
}
RestauranteCaseiro::~RestauranteCaseiro()
{
    int i;

    for(i=0 ; i<5 ; i++){
        delete mesas[i];
    }
     cout<<"mesas deletadas";
}
