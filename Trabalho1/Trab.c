#include <stdlib.h>
#include <stdio.h>

int main()
{
    int dpag, h,q;
    float valor;

    printf("Informe a data de vencimento:\n");
    scanf("%d", &dpag);

    do{
        printf("*************************************\n");
        printf("A data de vencimento e: %d\n",dpag);
        printf("Informe o valor da mensalidade:\n");
        scanf("%f",&valor);
        printf("Informe do dia que esta sendo pago\n");
        scanf("%d",&h);
        printf("\n*************************************\n");
        printf("Valor da mensalidade:R$%.2f\n",valor);
        printf("Dia do pagamento:%d\n",h);
        if(dpag > h)
        {
            valor = valor * 0.9;
            printf("Valor a ser pago:R$%.2f\n",valor);
        }
        else if (dpag == h)
        {
            printf("Valor a ser pago:R$%.2f\n",valor);
        }
        else
        {
            valor = (1.5 * (h - dpag)) + valor;
            printf("Valor a ser pago:R$%.2f\n",valor);
        }
        printf("\n*************************************\n");
        printf("Nova mensalidade?(1.S 2.N)\n");
        scanf("%d",&q);        
    }   
    while (q != 2);
    printf("Muito obrigado");
    return 0;
    
}