#ifndef PEDIDO_H
#define PEDIDO_H
#include <stdio.h>
#include <string>

class Pedido
{
    public:


        int numero, quantidade;
        float preco;
        std::string descricao;

        Pedido(int numero, int quantidade, float preco, std::string descricao);
        virtual ~Pedido();
        void toString();

};

#endif // PEDIDO_H
