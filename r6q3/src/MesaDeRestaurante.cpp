#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
    pedidosFeitos=0;
}
void MesaDeRestaurante::adicionaAoPedido(int numero, int quantidade, float preco, std::string descricao){

    pedidos[pedidosFeitos]= new Pedido(numero, quantidade, preco, descricao);
    pedidosFeitos++;
}
void MesaDeRestaurante::zeraPedidos(){
    int i;

    for(i=0 ; i<pedidosFeitos ; i++){
        pedidos[i]->quantidade=0;

    }


}
float MesaDeRestaurante::calculaTotal(){

    float total=0;
    int i;

    for(i=0 ; i<pedidosFeitos ; i++){
        total+=((pedidos[i]->preco)*(pedidos[i]->quantidade));

    }

    cout<<"Total: "<<total<<endl;
    return total;

}
MesaDeRestaurante::~MesaDeRestaurante()
{
    int i;

    for(i=0 ; pedidos[i] != NULL ; i++){
        delete pedidos[i];
    }
    cout<<"pedidos deletados\n";
}
