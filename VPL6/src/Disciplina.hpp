#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <vector>
#include "Alocacao.hpp"

class Disciplina{
    private:
        std :: string codigo,nome;
        std :: vector <Alocacao> alocacao;
    public:
        Disciplina(std :: string codigo, std :: string nome);
        void inserir_alocacao(std :: string dia, std :: string horario, std :: string sala);
        void remover_alocacao(std :: string horario);
        void imprimir_alocacao();
        std :: string getCodigo();
        std :: vector<Alocacao> getAlocacao();
};

#endif