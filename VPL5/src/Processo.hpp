#pragma once
#include <string>

class Processo{
    private:
    int id, prioridade;
    std::string nome;
    public:
    Processo(int id, std::string nome, int prioridade);
    void imprimir_dados();
    int getID();
    std::string getNome();
    int getPrioridade();
};