#ifndef TELEVISAO_H
#define TELEVISAO_H
#include <stdio.h>

class Televisao
{
    protected:

        int canal, som;



    public:
        Televisao();
        virtual ~Televisao();
        void setCanal(int canal);
        void setSom(int som);
        void avancarCanal();
        void avancarSom();
        void toString();
};

#endif // TELEVISAO_H
