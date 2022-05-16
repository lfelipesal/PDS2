#include "ListaProcessos.hpp"
#include <iostream>

void ListaProcessos :: adicionar_processo(Processo proc){
    int ord = proc.getPrioridade(), pos = 0;
    if(list.size()!=0){
        for(unsigned i = 0; i<list.size();i++){
            int priori = list.at(i).getPrioridade();
            if(ord>=priori){
                pos = i;
            }
        }
        list[pos+1]=proc;
    }else {
        list.insert(list.begin(),proc);
    }
}

Processo ListaProcessos :: remover_processo_maior_prioridade(){
    int maior = 0, pos = 0;
    
    for(unsigned i = 0; i<list.size();i++){
        int priori = list.at(i).getPrioridade();
        if(priori>maior){
            maior = priori;
            pos = i;
        }
    }
    Processo ret = list.at(pos);
    list.erase(list.begin()+pos-1);
    return ret;
}

Processo ListaProcessos :: remover_processo_menor_prioridade(){
    int menor = 9999, pos = 0;
    for(unsigned i = 0; i<list.size();i++){
        int priori = list.at(i).getPrioridade();
        if(priori<menor){
            menor = priori;
            pos = i;
        }
    }
    Processo ret = list.at(pos);
    list.erase(list.begin()+pos-1);
    return ret;
}

Processo ListaProcessos :: remover_processo_por_id(int id){
    for(unsigned i = 0; i<list.size();i++){
        if(list.at(i).getID()==id){
            Processo ret = list.at(i);
            list.erase(list.begin()+i-1);
            return ret;
        }
    }
}

void ListaProcessos :: imprimir_lista(){
    for(unsigned i = 0; i<list.size();i++){
        list.at(i).imprimir_dados();
    }
}