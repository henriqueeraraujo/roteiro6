#include "Televisao.h"

Televisao::Televisao()
{
    canal=0;
    som=0;
}
void Televisao::setCanal(int canal){
    this->canal=canal;
}
void Televisao::setSom(int som){
    this->som=som;
}
void Televisao::avancarCanal(){
    canal++;
}
void Televisao::avancarSom(){
    som++;
}
void Televisao::toString(){
    char texto[50];

    sprintf(texto,"canal: %d \t som:%d\n",canal, som);

    printf("%s",texto);

}
Televisao::~Televisao()
{
    //dtor
}
