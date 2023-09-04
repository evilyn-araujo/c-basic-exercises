#include <math.h>
#include <stdio.h>

int main(void)
{
    int idade;
    printf("Qual sua idade? ");
    scanf("d%", &idade);

    if (idade >= 16)
    {
        printf("Você pode votar");
    }
    else
    {
        printf("você não pode votar");
    }

    printf("/nFim de programa!");
    return 0;
}