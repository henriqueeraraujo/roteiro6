#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include <string>
#include "Pedido.h"
#include <iostream>

using namespace std;

class MesaDeRestaurante
{
    public:

        Pedido *pedidos[10];
        int pedidosFeitos;


        MesaDeRestaurante();
        virtual ~MesaDeRestaurante();
        void adicionaAoPedido(int numero, int quantidade, float preco, std::string descricao);
        float calculaTotal();
        void zeraPedidos();

};

#endif // MESADERESTAURANTE_H
