#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"


class RestauranteCaseiro
{
    public:

        MesaDeRestaurante *mesas[5];

        RestauranteCaseiro();
        virtual ~RestauranteCaseiro();
        void adicionaAoPedido();
        void calculaTotalRestaurante();

};

#endif // RESTAURANTECASEIRO_H
