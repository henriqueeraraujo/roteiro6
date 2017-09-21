#ifndef TELEVISAOTESTE_H
#define TELEVISAOTESTE_H
#include "Televisao.h"
#include <iostream>

using namespace std;

class TelevisaoTeste
{
    public:
        Televisao tv[5];

        TelevisaoTeste();
        virtual ~TelevisaoTeste();
        void menu();
        void listar();
};

#endif // TELEVISAOTESTE_H
