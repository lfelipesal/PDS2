#ifndef QUADROALOCACAO_H
#define QUADROALOCACAO_H

#include "Disciplina.hpp"
#include <map>

class QuadroAlocacao{
    private:
        std::map<Disciplina,Alocacao> quadroaloc;
    public:
        void inserir_alocacao(std::string codigo,std::string nome,std::string dia,std::string horario,std::string sala);
        void remover_alocacao_disciplina(std::string codigo,std::string horario);
        std :: vector<Disciplina> recuperar_disciplinas_mais_ofertadas();
        void imprimir_alocacao_completa();
};

#endif