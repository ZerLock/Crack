#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX  10000
#define MIN 0

int main(int argc, char *argv[]){
    int n = 10;
    int mailaddress[n];
    for(int x = 0; x < n; x++)
        mailaddress[x] = x;
    int passmail[n];
    passmail[0] = 474;
    srand(time(NULL));
    for(int a = 1; a < n; a++){
        passmail[a] = (rand() % (MAX - MIN + 1)) + MIN;
    }
    
    for(int i = 0; i < n; i++){
        for(int y = 0; y < n; y++){
            if(mailaddress[i] == 3 && passmail[y] == 474){
                printf("%d : %d = true", mailaddress[i], passmail[y]);
            }else{
                printf("%d : %d = false", mailaddress[i], passmail[y]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
