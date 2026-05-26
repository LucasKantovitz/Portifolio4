#include <stdio.h>

int main(){
    char nome[100] = "Lucas Kantovitz";
    float n1 = 4;
    float n2 = 2;
    float media = (n1 + n2) / 2;


    printf ("Nome do Aluno: %s \n", nome);
    printf ("Media do Aluno: %.2f \n", media);

    if(media >= 7){
        printf("Aluno %s está aprovado", nome);
    }else{
        printf("Aluno %s está de recuperação" , nome);
    }
    

    return 0; 
}
