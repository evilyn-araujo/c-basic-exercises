// Entrada: o arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão
// --------------------------------------------------------------------------------------
/*Processamento: nota A, B e C onde A tem peso 2, nota B tem peso 3 e C peso 5*/
// --------------------------------------------------------------------------------------
/*Saída: Imprima a variável MEDIA conforme exemplo abaixo,
com 1 dígito após o ponto  decimal e com um espaço em branco antes e depois da igualdade*/

#include <stdio.h>
int main()
{
    float A, B, C, MEDIA;

    printf("Nota A: ");
    scanf("%f", &A);
    printf("Nota B: ");
    scanf("%f", &B);
    printf("Nota C: ");
    scanf("%f", &C);

    MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10;
    printf("MÉDIA = %.1f\n", MEDIA);
}