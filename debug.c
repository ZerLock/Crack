#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX  10000
#define MIN 0
#define TAILLE_CHAINE 100

int main(int argc, char *argv[]){
    int n, x = 0, y = 0, u = 0m;
    scanf("%d", &n);

    char actualCaracter, mailaddress[TAILLE_CHAINE] = "", passmail[TAILLE_CHAINE] = "";
    
    FILE* dataFile = NULL;
    
    dataFile = fopen("data.txt", "r");
    
    if(dataFile != NULL){
        for(int i = 0; i < n; i++){
            mailaddress[TAILLE_CHAINE] = "";
            passmail[TAILLE_CHAINE] = "";
            do{
                actualCaracter = fgetc(dataFile);
                if(x = 0){
                    mailaddress[y] = actualCaracter;
                    y++;
                }else if(x = 1){
                    passmail[u] = actualCaracter;
                    u++;
                }
            }while(actualCaracter != " ");
            x = 1;
            if(mailaddress == "fjdfdhsj@sfr.fr" && passmail == "256df6"){
                printf("%s : %s = true", mailaddress, passmail);
            }else{
                printf("%s : %s = false", mailaddress, passmail);
            }
        }
    }else{
        printf("Erreur : Impossible d'ouvrir le fihcier data.txt !");
    }
    
    fclose(dataFile);
    return 0;
}
