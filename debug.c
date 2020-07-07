#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX  10000
#define MIN 0
#define TAILLE_CHAINE 100

int main(int argc, char *argv[]){
    char actualCaracter, mailaddress[TAILLE_CHAINE] = "", passmail[TAILLE_CHAINE] = "";
    
    FILE* dataFile = NULL;
    
    dataFile = fopen("data.txt", "r");
    
    if(dataFile != NULL){
        for(int i = 0; i < n; i++){
            do{
                actualCaracter = fgetc(dataFile);
                printf("%c", actualCaracter);
            }while(actualCaracter != "\n");
        }
    }else{
        printf("Erreur : Impossible d'ouvrir le fihcier data.txt !");
    }
    
    fclose(dataFile);
    return 0;
}
