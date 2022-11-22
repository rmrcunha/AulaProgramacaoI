#include <stdlib.h>
#include <stdio.h>

int main(){
    printf("***************************\n");
    printf("Calculo de resistencia e tensão\n");
    printf("Escolha o que deseja calcular:\n");
    printf("***************************\n");
    int e;
    float v, i, r;

    printf("1.Calculo da resistencia\n2.Calculo da tensao\n");
    scanf("%d", &e);
    printf("***************************\n");

    if(e != 1 && e != 2){
        printf("Escolha somente 1 ou 2\n");
    }   else{
        if(e == 1){
            printf("Informe a tensao do seu circuito:\n");
            scanf("%f", &v);
            printf("Informe a corrente do mesmo:\n");
            scanf("%f", &i);
            r = v / i;
            printf("Sua resistencia e de %.2f ohms.\n", r);    
        }
        if (e == 2){
            printf("Informe a resistencia do seu circuito:\n");
            scanf("%f",&r);
            printf("Informe a corrente do mesmo:\n");
            scanf("%f", &i);

            v = r / i;
            printf("Sua tensao e de %.2f V", v);
        }
        
    }
}