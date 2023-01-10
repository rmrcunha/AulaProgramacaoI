#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

int main(){
    char ch;
    printf("Digite uma letra diferente\n");
    scanf("%c",&ch);
    while (ch != 'f'){
        printf("digite a letra s\n");
        scanf("%c", &ch);
        if(ch == 's'){
            for(int i = 1; i< 10; i++){
                printf("\a");
                Sleep(1000);
            }
        }
    }
    
}