/**
 * Solicitar nome do produto, qtdee unitario do produto.
 * 
 * apos pegar os dados fazer as perguntas
 * usando switch
 * 1- Imprimir item (Nome, Qtde, V_Unit, Total)
 * 2- Alterar a Qtde(Ponteiro)
 * 3- Alterar o Unitario(Ponteiro)
 * 4- Cadastrar outro item
 * 5- sair
 * 
 */

#include <stdio.h>

int main (){
    int nomeProduto;
    int qtde;
    int valorUnitario;
    printf("Informe seu nome do Produto:\n");
    scanf("Nome %d", nomeProduto);
    printf("Qual quantidade\n");
    scanf("Qtde %d", qtde);
    printf("Informe o Valor Unitario\n");
    scanf("Valor Unitario %d", valorUnitario);

    int loop;
    do
    {
        switch (loop){
            case 1:
        printf("Nome: %s Qtde: %d V.Unit: %d Total: %d\n",
            nomeProduto, qtde, valorUnitario, qtde * valorUnitario);

                break;

            case 2:

                break;

            case 3:

                break;

            case 4:

                break;
        }
    

        
    } while (loop == 5);
    

    return 0;
}