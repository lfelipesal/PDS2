#include "Processo.hpp"
#include <iostream>

Processo :: Processo(int id, std::string nome, int prioridade){
    this->id = id;
    this->nome = nome;
    this->prioridade = prioridade;
}

void Processo :: imprimir_dados(){
    std::cout << id << " " << nome << " " << prioridade << std :: endl;
}

int Processo :: getID(){
    return this->id;
}

std::string Processo :: getNome(){
    return this->nome;
}

int Processo :: getPrioridade(){
    return this->prioridade;
}