#include <stdlib.h>
#include <stdio.h>

int main(){
    printf("***************************\n");
    printf("Calculadora\n");
    printf("Digite dois numeros e escolha a operacao desejada\n");
    printf("***************************\n");

    float n1, n2;
    int op;
    
    printf("Digite o primeiro numero:\n");
    scanf("%f", &n1);
    printf("***************************\n");

    printf("Digite o segundo numero:\n");
    scanf("%f",&n2);
    printf("***************************\n");

    printf("Escolha a operacao\n    1.Adicao\n    2.Subtracao\n    3.Multiplicacao\n    4.Divisao\n");
    printf("***************************\n");
    scanf("%d", &op);

    float r;

    switch (op){
    case 1: r = n1 + n2;
        printf("O resultado desta adicao e %.2f", r);
        break;
    case 2: r = n1 - n2;
        printf("O resultado da subtracao e %.2f", r);
        break;
    case 3: r = n1 * n2;
        printf("O resultado da multiplicacao e %.2f", r);
        break;
    
    case 4:
        if(n2 != 0){
            r = n1 / n2;
            printf("O resultado da divisao e %.2f", r);
        } else{
            printf("Divisao por zero e igual a infinito genio");
        }
        break;
    default:
        printf("Voce deve escolher uma operacao");
        break;
    }


}