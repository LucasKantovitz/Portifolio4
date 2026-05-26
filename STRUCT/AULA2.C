#include <stdio.h>
#include <string.h>

struct Dados{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float media;
};

int main (){

    struct Dados m1;
    m1.matricula = 4223;
    strcpy(m1.nome , "Lucas");
    m1.nota1 = 5;
    m1.nota2 = 5;

    m1.media= (m1.nota1 + m1.nota2) / 2;

    printf ("Nome %s\n", m1.nome);
    printf ("Nota1 %2.f\n", m1.nota1);
    printf ("Nota2 %2.f\n", m1.nota2);
    printf ("Media %2.f\n", (m1.nota1+m1.nota2) / 2);
    printf ("Media %2.f\n", m1.media);


    return 0;
}