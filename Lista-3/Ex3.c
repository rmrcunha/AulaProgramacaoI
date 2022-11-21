/*A média exigida para aprovação no curso de Eletrônica é 6,0. Desenvolva
um algoritmo que realize a leitura de 3 notas distintas e calcule a média
do aluno. Caso a média seja inferior a 6,0 o programa deverá apresentar
em tela a mensagem: “O aluno foi reprovado!”, caso a média seja igual ou
maior que 6,0 o programa deverá apresentar em tela a mensagem: “O
aluno foi aprovado”.*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    printf("***************************\n");
    printf("Calculo da media de notas\n");
    printf("Voce devera informar 3 notas de um aluno\n");
    printf("***************************\n");

    int aprov = 6;
    float n1, n2, n3;

    printf("Informe a primeira nota:\n");
    scanf("%f", &n1);
    printf("***************************\n");
    if(n1 > 10){
        printf("A nota maxima e 10!!");
    } else 
    {
        printf("Informe a segunda nota:\n");
        scanf("%f", &n2);
        printf("***************************\n");

        if (n2 > 10){
            printf("A nota maxima e 10!!");
        } else
        {
            printf("Informe a terceira nota:\n");
            scanf("%f", &n3);
            printf("***************************\n");

            if (n3 > 10){
                printf("A nota maxima e 10!!");
            }   else{
                float m = (n1 + n2 + n3)/3;

                if(m >= aprov){
                    printf("O aluno foi aprovado :)\n");
                    printf("A media do aluno foi: %.2f", m);
                }   else{
                    printf("O aluno foi reprovado :(\n");
                    printf("A media do aluno foi: %.2f", m);
                }
            }
            
        }
    }


}