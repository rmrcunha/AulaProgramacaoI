#include <stdlib.h>
#include <stdio.h>
int main(){
printf("*****************\n");
printf("Calculo IMC\n");
printf("*****************\n");

float imc, peso, altura;

printf("Para comecar, informe seu peso:\n");
scanf("%f", &peso);
printf("*****************\n");

printf("Agora informe sua altura no formato m.cm:\n");
scanf("%f", &altura);
printf("*****************\n");

imc = peso / (altura * altura);

if(imc < 18.5){
printf("Seu imc e de %f, voce esta classificado como BAIXO PESO", imc);
}
if(imc > 18.5 && imc <= 24.9){
printf("Seu imc e de %f, voce esta classificado como EUTROFIA", imc);
}
if(imc >= 25 && imc <= 29.9){
printf("Seu imc e de %f, voce esta classificado como SOBREPESO", imc);
}
if(imc > 30){
printf("CUIDADO, seu IMC e de %f e esta classificado como OBESIDADE", imc);
}
}