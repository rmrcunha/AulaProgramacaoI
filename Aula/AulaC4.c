#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

int main(){
    int h, m, s;

    printf("Digite as horas, minutos e segundos\n");
    printf("Horas(formato 24h):\n");
    scanf("%d", &h);
    if(h > 24){
        printf("Nao pode ir acima de 24h\n");
        return 0;
    }
    printf("Minutos:\n");
    scanf("%d",&m);
    if(m > 60){
        printf("Minutos devem ser abaixo de 60\n");
        return 0;
    }
    printf("Segundos:\n");
    scanf("%d",&s);
    if(s> 60){
        printf("Segundos devem ser abaixo de 60\n");
        return 0;
    }

    while(1){
        
        Sleep (1000);
			s++;
			system("cls");

			if (s > 59) {
				m++;
				s = 0;
			}
			if (m > 59) {
				h++;
				m = 0;
			}
			if (h > 23) {
				h = 0;
			}
			printf("%d: %d: %d", h, m, s);
    }
}
