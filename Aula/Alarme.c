#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

int main(){
    int h, m, s;

    printf("Informe:\n");
    printf("A hora atual(formato 24h):\n");
    scanf("%d", &h);
    if(h > 24){
        printf("Nao pode ir acima de 24h\n");
        return 0;
    }
    printf("Os minutos:\n");
    scanf("%d",&m);
    if(m > 60){
        printf("Minutos devem ser abaixo de 60\n");
        return 0;
    }
    printf("Os Segundos:\n");
    scanf("%d",&s);
    if(s> 60){
        printf("Segundos devem ser abaixo de 60\n");
        return 0;
    }
    char ch;
    int dh, dm, ds;
    printf("Deseja ativar o despertador(S ou N)?\n");
    scanf("%c", &ch);
    printf("%c", ch);


    if(ch == 's' && ch == 'S'){
        printf("Informe:");
        printf("A hora para ativar o alarme:\n");
        scanf("%d", &dh);
        

        printf("Os minutos para ativar o alarme:\n");
        scanf("%d", &dm);

        printf("Os segundos para ativar o alarme:\n");
        scanf("%d", &ds);

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

            if(dh == h && dm == m && ds == s){
                printf("\a");
                printf("%d : %d: %d", dh, dm, ds);
            }
        }
    }
    if(ch != 's'){
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

    



    
}
