#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Declaração de variáveis
    float numero1, numero2, soma , subtracao , multiplicacao , divisao;
    /* code */
    
    //Pedir ao utilizador o primeiro numero
    printf("Por favor insere o primeio numero: ");
    scanf("%f" , &numero1);

    //Pedir ao utilizador o segundo numero
    printf("Por favor insere o segundo numero: ");
    scanf("%f" , &numero2);

    //Calculo da soma
     soma = (numero1 + numero2);
     printf("A soma e: %0.1f", soma);
          puts("");

     //Calculo da subtração
     subtracao = numero1 - numero2;
     printf("A subtracao e: %0.1f", subtracao);
        puts("");

     //Calculo da multiplicação
     multiplicacao = numero1 * numero2;
     printf("A multiplicacao e: %0.1f", multiplicacao);
          puts("");

    //Calculo da Divisão
     divisao = numero1 / numero2;
     printf("A divisao e: %0.1f", divisao);
          puts("");


    return 0;
}
