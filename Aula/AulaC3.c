#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

int main(){
    int i = 0;
    char ch = 'e';

    while(ch!='F'&& ch!='f'){
        if(ch!='\n'){
            printf("\n Digite alguma letra:");
        }
        scanf("%c", &ch);
        if(ch =='s' || ch== 'S'){
            for(i=0; i<0; i++){
                Sleep(1000);
                printf("-> \a %d",i);
            }
        }
    }   
}