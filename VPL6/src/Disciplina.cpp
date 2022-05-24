#include "Disciplina.hpp"

Disciplina :: Disciplina(std :: string codigo, std :: string nome){
    this->codigo;
    this->nome;
}

void Disciplina :: inserir_alocacao(std :: string dia, std :: string horario, std :: string sala){
    alocacao.push_back(Alocacao(dia,horario,sala));
}

void Disciplina :: remover_alocacao(std :: string horario){
    for(unsigned i = 0; i<alocacao.size();i++){
        if(horario == alocacao.at(i).getHorario()){
            alocacao.erase(alocacao.begin()+i);
        }
    }
}

void Disciplina :: imprimir_alocacao(){
    std :: vector <Alocacao> aux1=alocacao;
    for(unsigned i = 0; i<alocacao.size();i++){
        int menor=999999,pos=0;
        for(unsigned j = 0;j<aux1.size();j++){
            std :: string aux = aux1.at(i).getHorario();
            int in = aux[0]+aux[1];
            if(in < menor){
                menor = in;
                pos=j;
            }
        }
        aux1[pos].imprimir_dados();
        aux1.erase(aux1.begin()+pos);
    }
}

std :: string Disciplina :: getCodigo(){
    return codigo;
}

std :: vector<Alocacao> Disciplina :: getAlocacao(){
    return alocacao;
}