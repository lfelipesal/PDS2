#include <iostream>

int main(){

    // 1) Declare uma variável do tipo inteiro e atribua o valor '10'
    int v = 10;

    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    int *ptr=nullptr;
    // 3) Declare um vetor de inteiros e inicialize com valores de 9 a 0 (nessa ordem)
    int *g;
    int j=9;
    g = new int[10];
    for(int i =0; i<10 ;i++){
        g[i] = j;
        j--;
    }

    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    
    std :: cout << &v << std :: endl;
    // 5) Imprima o VALOR da variável declarada em (1)
    
    std :: cout << v << std :: endl;
    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    
    std :: cout << &ptr << std :: endl;
    // 7) Imprima o VALOR da variável declarada em (2)
    std :: cout << ptr << std :: endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    
    std :: cout << g << std:: endl;

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    
    std :: cout << &g[0] << std:: endl;
    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    std :: cout << g[0] << std:: endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    ptr = &v;
    

    // 12) Imprima o VALOR da variável declarada em (2)
    std :: cout << ptr << std :: endl;

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std :: cout << *ptr << std :: endl;

    // 14) Imprima o resultado da comparação do ENDEREÇO de (1) e do VALOR de (2)
    
    std :: cout << (&v == ptr )  << std :: endl;

    // 15) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    *ptr = 5;

    // 16) Imprima o VALOR da variável declarada em (1)
    std :: cout << v << std :: endl;

    // 17) Atribua o ENDEREÇO apontado pela variável (3) à variável declarada em (2)
    ptr = g;

    // 18) Imprima o VALOR da variável declarada em (2)
    std :: cout << ptr << std :: endl;

    // 19) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std :: cout << *ptr << std :: endl;

    // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    
    ptr = &g[0];

    // 21) Imprima o VALOR da variável declarada em (2)
    
    std :: cout << ptr << std :: endl;
    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    
    std :: cout << *ptr << std :: endl;
    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    for(int i = 0; i<10; i++){
        *g = *g * 10;
        g++;
    }
    g = ptr;
    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    for(int i = 0; i<10; i++){
        if(i == 9 ) {
            std :: cout << g[i] << std :: endl;
        }else
        std :: cout << g[i] << " ";
    }
    //std :: cout << std :: endl;
    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    
     for(int i = 0; i<10; i++){
         if(i == 9 ) {
         std :: cout << *g << std :: endl;
         }else
        std :: cout << *g << " ";
        g++;
    }
    //std :: cout << std :: endl;
    g = g-10;
    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    for(int i = 0; i<10; i++){
        if(i == 9 ){
        std :: cout << *ptr << std :: endl;
        }else
        std :: cout << *ptr << " ";
        ptr++;
    }
    //std :: cout << std :: endl;
    // 27) Atribua o ENDEREÇO da quinta posição de (3) à variável declarada em (2)
    ptr = &g[4];

    // 28) Imprima o VALOR da variável declarada em (2)
    
    std :: cout << ptr << std :: endl;
    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    
    std :: cout << *ptr << std :: endl;
    // 30) Imprima o VALOR guardado no: ENDEREÇO do ponteiro (2) decrementado de 4
    

    std :: cout << *(ptr-4) << std :: endl;
    // 31) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    int **pt= &ptr;


    // 32) Imprima o VALOR da variável declarada em (31)
    
    std :: cout << pt << std :: endl;
    // 33) Imprima o ENDEREÇO da variável declarada em (31)
    std :: cout << &pt << std :: endl;

    // 34) Imprima o VALOR guardado no ENDEREÇO apontado por (31)
    
    std :: cout << *pt << std :: endl;
    // 35) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (31)

    std :: cout << **pt << std :: endl;
    
    return 0;
}