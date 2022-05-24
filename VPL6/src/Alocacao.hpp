#ifndef ALOCACAO_H
#define ALOCACAO_H

#include <string>

class Alocacao{
    private:
        std :: string dia,horario, sala;
    public:
        Alocacao(std :: string dia, std :: string horario, std :: string sala);
        void imprimir_dados();
        std :: string getDia();
        std :: string getHorario();
        std :: string getSala();

};

#endif