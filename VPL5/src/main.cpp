// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_escalonador.hpp"
#include <iostream>
#include <vector>


int main() {

    ListaProcessos esc,apag;
    char comando=0;
    std :: string nome;
    int id,prioridade;
    while(1){
        std :: cin >> comando;
        if(comando == 'a'){
            std :: cin >> id >> nome >> prioridade;
            esc.adicionar_processo(Processo(id,nome,prioridade));
            continue;
        }
        if(comando == 'm'){
            apag.adicionar_processo(esc.remover_processo_maior_prioridade());
            continue;
        }
        if(comando == 'n'){
            apag.adicionar_processo(esc.remover_processo_menor_prioridade());
            continue;
        }
        if(comando == 'r'){
            std :: cin >> id;
            apag.adicionar_processo(esc.remover_processo_por_id(id));
            continue;
        }
        if(comando ==  'p'){
            esc.imprimir_lista();
            continue;
        }
        if(comando == 'b'){
            avaliacao_basica();
            continue;
        }
    }
}