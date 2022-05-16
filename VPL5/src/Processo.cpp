#include "Processo.hpp"
#include <iostream>

Processo :: Processo(int id, std::string nome, int prioridade){
    id = id;
    nome = nome;
    prioridade = prioridade;
}

void Processo :: imprimir_dados(){
    std::cout << id << " " << nome << " " << prioridade << std :: endl;
}

int Processo :: getID(){
    return id;
}

std::string Processo :: getNome(){
    return nome;
}

int Processo :: getPrioridade(){
    return prioridade;
}