#pragma once
#include <vector>
#include "Processo.hpp"

class ListaProcessos
{
    private:

    std :: vector<Processo > list;


    public:
    
    void adicionar_processo(Processo proc);
    Processo remover_processo_maior_prioridade();
    Processo remover_processo_menor_prioridade();
    Processo remover_processo_por_id(int id);
    void imprimir_lista();
};