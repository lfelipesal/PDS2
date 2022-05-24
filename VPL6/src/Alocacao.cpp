#include "Alocacao.hpp"
#include <iostream>

Alocacao :: Alocacao (std :: string dia, std :: string horario, std :: string sala){
    this->dia;
    this->horario;
    this->sala;
}

void Alocacao :: imprimir_dados(){
    std :: cout << dia << " " << horario << " " << sala << std :: endl;
}

std :: string Alocacao :: getDia(){
    return dia;
}

std :: string Alocacao :: getHorario(){
    return horario;
}

std :: string Alocacao :: getSala(){
    return sala;
}