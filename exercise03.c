/*
Dado dois números inteiros, mostre o resultado da soma

- Entrada: 2 números inteiros
- Processamento: somar números lidos
- Saída: resultado da soma
*/
#include <stdio.h>
int main(void){

    int num1, num2, soma;
    printf("Informe dois números: ");
    scanf("%d%d", &num1, &num2);
    soma= num1+num2;
    printf("O valor é : %d\n", num1);
}

