#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 1;
    float ph;
    double c;

    while (i == 1)
    {

        printf("Informe o pH da agua coletada\n");
        scanf("%f", &ph);
        if (ph >= 0 && ph <= 6.5)
        {
            printf("ACIDO - A agua esta acida demais.\nValor ideal: entre 9 e 10.\n");
        }
        if (ph >6.5  && ph <= 8.5)
        {
            printf("NEUTRO - A agua esta neutra.\nValor ideal: entre 9 e 10.\n");
        }
        if (ph > 8.5 && ph < 9 || ph >10 && ph < 20)
        {
            printf("ALCALINA - A agua esta alcalina.\nValor ideal: entre 9 e 10.\n");
        }
        if (ph >=9 && ph <= 10)
        {
            printf("ALCALINA POTAVEL - A agua esta alcalina e perfeita para o consumo.\n");
        }


        if(ph > 20 || ph < 0)
        {
            return i = 0;
        }
        
    }
    
}