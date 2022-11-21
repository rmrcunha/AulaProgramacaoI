
#include <stdlib.h>
#include <stdio.h>

int main(){
    int fixo = 1;
    int variavel = 2;

    int escolha;
    float valor;

    printf("***************************\n");
    printf("Escolha o tipo de resistor\n    1 - Resistor fixo\n    2 - Resistor variavel\n");
    printf("***************************\n");

    scanf("%d",&escolha);

    if(escolha == fixo){
        printf("***************************\n");
        printf("Voce escolheu um resistor fixo, escolha o valor dele:\n");
        scanf("%f",&valor);
        printf("***************************\n");
        printf("Seu resitor de %.2f ohms esta aqui", valor);
    }
    if(escolha == variavel) {
        printf("***************************\n");
        printf("Voce escolheu um resistor variavel, escolha seu valor:\n");
        scanf("%f",&valor);
        printf("***************************\n");
        printf("Seu resistor esta com o valor de %.2f ohms.",valor);
    }   
    if(escolha > 2 || escolha < 1)  {
        printf("Escolha entre 1 e 2.");
    }

}