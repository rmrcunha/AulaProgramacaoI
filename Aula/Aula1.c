#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

int main(){
    int i = 0;
    while(i++ < 3){
        Sleep(1000);
        printf("->\a");
    }
    return 0;
}