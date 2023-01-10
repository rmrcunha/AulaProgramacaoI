
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int d,s, i = 1;

    double c;

    while (i == 1)
    {
        printf("Qual foi o dia da chamada?\n");
        scanf("%d", &d);
        if (d > 31)
        {
            printf("Por favor, coloque um dia ate 31.\n");
            return i = 0;
        }
        printf("Quantos segundos durou a chamada?\n");
        scanf("%d",&s);
        if (s < 0)
        {
            printf("Por favor, digite um tempo valido.\n");
            return i = 0;
        }
        

        if (d  <= 15)
        {
            c = 0.05 * s;
            printf("***************************\n");
            printf("Valor pago: R$%.2lf\nPrimeira quinzena\n",c);
            printf("***************************\n");
        }
        else
        {
            if (s < 181)
            {
                c = 0.04 * s;
                printf("***************************\n");
                printf("Valor pago: R$%.2lf\nSegunda quinzena\n",c);
                printf("***************************\n");
            }
            else
            {
                c = 0.03 * s;
                printf("***************************\n");
                printf("Valor pago: R$%.2lf\nSegunda quinzena\n",c);
                printf("***************************\n");
            }
        }

        char r;
        printf("Voce deseja registrar outra chamada? (S/N)\n");
        scanf(" %c", &r);

        if(r == 'n')
        {
            return i = 0;
        }
        
    }
    
}