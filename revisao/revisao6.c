/**6 - Desenvolva um programa em linguagem C que apresente um menu de opções para o usuário.
 *  O programa deve pedir dois números e, em seguida, solicitar que o usuário escolha uma operação:

1 - Soma
2 - Subtração
3 - Multiplicação
4 - Divisão */

#include <stdio.h>

int main (){
    int opcao = 0;
    float a = 0;
    float b = 0;

    printf("Digite o primeiro numero");
    scanf("%f", &a);
    printf("Digite o segundo numero");
    scanf("%f", &b);

    printf("Digite a opcao que vc deseja temos");
    printf(" 1- Soma");
    printf(" 2 - Subtracao");
    printf(" 3- Divisao");
    printf(" 4- Multiplicacao");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Soma eh: %f", a + b);
        break;
    case 2:
        printf("Subtracao eh %f", a + b);
        break;
    case 3:
        if(b != 0){
            printf("Divisao eh:%f", a / b );
        }else{
            printf("Erro");
        }
        break;
    case 4:
        printf("Multiplicao eh %f", a * b);
        break;
    
    default:
        break;
    }



    return 0;
}