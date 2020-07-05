#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n = 10;
    int mailaddress[n];
    for(int x = 0; x < n; x++)
        mailaddress[x] = x;
    int passmail[n] = {15, 188 ,15498 ,181 ,78487, 7848 ,165 ,17848 ,474 , 87};
    
    for(int i = 0; i < n; i++){
        for(int y = 0; y < n; y++){
            if(mailaddress[i] == 3 && mailpass[y] == 474){
                printf("%d : %d = true", mailaddress[i], passmail[y]);
            }else{
                printf("%d : %d = false", mailaddress[i], passmail[y]);
            }
        }
    }
    
    return 0;
}
