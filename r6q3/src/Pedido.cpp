#include "Pedido.h"

Pedido::Pedido(int numero, int quantidade, float preco, std::string descricao)
{
    this->numero=numero;
    this->quantidade=quantidade;
    this->preco=preco;
    this->descricao=descricao;

}
void Pedido::toString(){

    char texto[150];

    sprintf(texto,"Numero: %d\nQuantidade: %d\nPreco: %lf\nDescricao: %s\n",numero, quantidade, preco, descricao);

    printf("%s\n", texto);

}
Pedido::~Pedido()
{
    //dtor
}
