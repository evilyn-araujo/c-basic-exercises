//Digite a ntota que um aluno tirou em 3 semestres e digite  a média final, 
// se o aluno ficou com 7 ou mais printe a frase aprovado, caso contrario a frase reprovado


#include <stdio.h>
int main(void)
{
    float n1, n2, n3;
    
    printf("Informe a n1: ");
    scanf("%f", &n1);
     printf("Informe a n2 ");
    scanf("%f", &n2);
     printf("Informe a n3: ");
    scanf("%f", &n3);
    
    float media = (n1 + n2 + n3) / 3;
    printf("Média = %f \n", media);
    
    if(media <= 6){
        printf("Reprovado");
    }else{
        printf("Aprovado");
    }
    
    
}