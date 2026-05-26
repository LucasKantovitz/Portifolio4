#include <stdio.h>

int main (){
    float n1 = 10.0;
    float n2 = 8;
    float resultado;

    if(n2 != 0){
        resultado = n1/n2;
        printf("Resultado eh: %.2f" , resultado);

    }
    if(n2 ==0){
        printf("ERRO: Valor n2 nao poder ser zero");
        
    }
    return 0;
}