#include "ListaProcessos.hpp"
#include <iostream>

void ListaProcessos :: adicionar_processo(Processo proc){
    //int ord = proc.getPrioridade(), pos = 0;
    //std :: vector<int> ordem;
    //int aux;
    //std::cout << std::endl;
    if(list.size()!=0){
        list.push_back(proc);
        //std :: cout << "entrou"<< std :: endl;
        /*for(unsigned i = 0; i<list.size();i++){
            ordem.push_back(list.at(i).getPrioridade());
            std :: cout << ordem[i] << " ";
        }
        std :: cout << std :: endl;*/
        for(unsigned i = 0; i<list.size()-1;i++){
            for(unsigned j = i+1;j>0;j--){
                if(list[j].getPrioridade()>list[j-1].getPrioridade()){
                    Processo aux = list[j-1];
                    list[j-1]=list[j];
                    list[j]=aux;
                }else { 
                    break;
                }
            }
        }
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
    list.erase(list.begin()+pos);
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
    list.erase(list.begin()+pos);
    return ret;
}

Processo ListaProcessos :: remover_processo_por_id(int id){
    int pos=0;
    for(unsigned i = 0; i<list.size();i++){
        if(list.at(i).getID()==id){
            pos=i;
            break;
        }
    }
    Processo ret= list[pos];
    list.erase(list.begin()+pos);
    return ret;
}

void ListaProcessos :: imprimir_lista(){
    for(unsigned i = 0;i<list.size();i++){
        list.at(i).imprimir_dados();
    }
    //std :: cout << list.size() << std :: endl;
}
