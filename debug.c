#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX  10000
#define MIN 0
#define TAILLE_CHAINE 100

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    
    int actualPosition, precedantPosition;
    
    char actualCaracter;
    
    char mailaddress[TAILLE_CHAINE] = "";
    
    /*
    for(int x = 0; x < n; x++)
        mailaddress[x] = x;
    */
    
    char passmail[TAILLE_CHAINE] = "";
    
    /*
    srand(time(NULL));
    for(int a = 1; a < n; a++){
        passmail[a] = (rand() % (MAX - MIN + 1)) + MIN;
    }
    */
    
    FILE* dataFile = NULL;
    
    dataFile = fopen("data.txt", "r");
    

    if(dataFile != NULL){
        do{
            actualPosition = fgetc(dataFile);
            fseek(dataFile, (actualPosition - precedantPosition), SEEK_CUR);
            fscanf(dataFile, "%s %s", &mailaddress, &passmail);
            actualPosition = ftell(dataFile);
            if(mailaddress[TAILLE_CHAINE] == "jskflsd@gmail.com" && passmail[TAILLE_CHAINE] == "rfdkfsdop25"){
                printf("%s : %s = true\n", mailaddress[TAILLE_CHAINE], passmail[TAILLE_CHAINE]);
            }else{
                printf("%s : %s = false\n", mailaddress[TAILLE_CHAINE], passmail[TAILLE_CHAINE]);
            }
        }while(actualCaracter != EOF);
    }else{
        printf("Erreur : Impossible d'ouvrir le fihcier data.txt !");
    }
    
    /*
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
    */
    
    fclose(dataFile);
    return 0;
}
