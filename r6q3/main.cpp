#include <iostream>
#include "RestauranteCaseiro.h"

using namespace std;

void menu(){
    cout<<"<<<<<<<<MENU>>>>>>>>>\n";
    cout<<"(0) - Sair \n";
    cout<<"(1) - Adicionar Pedido\n";
    cout<<"(2) - Calcular o total apurado\n";

}

int main()
{
    int op;
    RestauranteCaseiro restaurante = RestauranteCaseiro();

    cout<<"ola, seja bem vindo!\n";

    while(1){

        menu();
        cin>>op;

        switch(op){
            case 0:
                cout<<"Ate mais...\n";
                return 0;

            case 1:
                restaurante.adicionaAoPedido();
                break;

            case 2:
                restaurante.calculaTotalRestaurante();
                break;

            default :
                cout<<"Entrada invalida, tente novamente !\n";
        }

    }


    cout << "adeus..." << endl;
    return 0;
}
