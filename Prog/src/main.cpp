#include <iostream>
#include <string>

int main() {
    std :: string entrada;
    std :: cin >> entrada;
    int a=0,e=0,i=0,o=0,u=0;
    for(int j =0; j<entrada.length();j++){
        if(entrada.at(j)=='a'){
            a++;
        }
        if(entrada.at(j)=='e'){
            e++;
        }
        if(entrada.at(j)=='i'){
            i++;
        }
        if(entrada.at(j)=='u'){
            u++;
        }
        if(entrada.at(j)=='o'){
            o++;
        }
    }
    if (a != 0){
        std :: cout << " a " << a << std :: endl;
    }
    if (e != 0){
        std :: cout << " e " << e << std :: endl;
    }
    if (i != 0){
        std :: cout << " i " << i << std :: endl;
    }
    if (o != 0){
        std :: cout << " o " << o << std :: endl;
    }
    if (u != 0){
        std :: cout << " u " << u << std :: endl;
    }
}