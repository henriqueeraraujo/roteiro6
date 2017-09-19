#ifndef RELOGIO_H
#define RELOGIO_H


class Relogio
{
    protected:
        int hora, minuto, segundo;

    public:
        Relogio();
        virtual ~Relogio();
        void setHorario(int hora, int minuto, int segundo);
        int getHora();
        int getMinuto();
        int getSegundo();
        void avancarHorario();
};

#endif // RELOGIO_H
