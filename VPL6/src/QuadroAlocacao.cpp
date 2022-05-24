#include "QuadroAlocacao.hpp"

void QuadroAlocacao :: inserir_alocacao(std::string codigo,std::string nome,std::string dia,std::string horario,std::string sala){
    quadroaloc[Disciplina(codigo,nome)]=Alocacao(dia,horario,sala);
}

void QuadroAlocacao :: remover_alocacao_disciplina(std::string codigo,std::string horario){
    std::map<Disciplina,Alocacao>::iterator it;
    for(it = quadroaloc.begin();it != quadroaloc.end(); it++){
        Disciplina aux = it->first;
        if(codigo == aux.getCodigo()){
            std :: vector <Alocacao> aux1 = aux.getAlocacao();
            for(unsigned i = 0; i<aux1.size();i++){
                if(horario == aux1.at(i).getHorario()){
                    aux.remover_alocacao(horario);
                }
            }
        }
    }
}

std :: vector<Disciplina> QuadroAlocacao :: recuperar_disciplinas_mais_ofertadas(){
    std::map<Disciplina,Alocacao>::iterator it;
    Disciplina aux=it->first;
    int maior=0;
    for(it = quadroaloc.begin();it != quadroaloc.end(); it++){
        std :: vector <Alocacao> aux1 = aux.getAlocacao();
        if(aux1.size()>maior){
            maior = aux1.size();
            aux=it->first;
        }
    }
    
}