/*
Calcule o valor do pagamento de uma parcela em atraso
cobrando juros de 0.5% ao dia.

Entrada: parcela e dias de atraso
Processamento: calcular o juro e mostra somado com o valor da5
5 parcela
Saída: o resultado da parcela somado ao valor do juro
*/

/*
Calcule o valor do pagamento de uma parcela em atraso
cobrando juros de 0.5% ao dia.

Entrada: parcela e dias de atraso
Processamento: calcular o juro e mostra somado com o valor da
5 parcela
Saída: o resultado da parcela somado ao valor do juro
*/

#include <stdio.h>

int main(void)
{
    // declaração das variáveis
    int parcela,dias_atraso;
    float valor_parcela, valor_juro = 0.1;
    

    printf("Informe o Valor da parcela: ");
    scanf("%d", &parcela);
    printf("Informe o valor de dias de atraso: ");
    scanf("%d", &dias_atraso);
    
    float calculo_juros = parcela * valor_juro;
    float valor_total = calculo_juros + parcela;
    
    printf("Valor total a ser pago: %f", valor_total);
    
    
}
