/*A função básica de um capacitor é armazenar carga elétrica em seu
interior. Em um circuito os capacitores podem estar associados em série
ou em paralelo. Desenvolva um algoritmo que realize o cálculo da
capacitância de acordo com sua associação.
Capacitores em série: (C1 x C2)/C1 + C2
Capacitores em paralelo: C1 + C2 */

#include <stdlib.h>
#include <stdio.h>

int main(){
    int serie = 1;
    int paralelo = 2;

    int escolha;
    
    float c1,c2;

    printf("***************************\n");
    printf("Calculo da capacitancia\n");
    printf("***************************\n");

    printf("Coloque o valor do primeiro capacitor:\n");
    scanf("%f", &c1);
    printf("Coloque o valor do segundo capacitor\n");
    scanf("%f", &c2);
    printf("***************************\n");

    printf("Escolha o tipo de associacao dos capacitores\n  1 - serie\n 2 - paralelo\n");
    scanf("%d", &escolha);
    printf("***************************\n");

    if (escolha == serie){
        float ct = (c1 * c2)/(c1+c2);

        printf("O resultado dessa associacao e de %.2f Faradays", ct);
    }
    if (escolha == paralelo){
        float ct = c1 + c2;
        printf("O resultado dessa associacao e de %.2f Faradays", ct);
    }
    if(escolha > 2 || escolha < 1){
        printf("Apenas 1 e 2 genio!!!");
    }
    

    
}