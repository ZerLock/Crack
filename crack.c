#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000000

void goodChain(char *email_chain, char *pwd_chain);
void clearBuffer(char *email_chain, char *pwd_chain);

int main(void){

    FILE *data = NULL;
    int c = 0, numberOfLine = 0;
    char good_email_chain[] = "testduhack@gmail.com", good_pwd_chain[] = "hacktest20";

    char email_chain[MAX_SIZE] = "", pwd_chain[MAX_SIZE] = "";
    data = fopen("data.txt", "r");

    if(data != NULL)
    {
        printf("Ouverture du fichier reussi !\n\n");
        
        do{
            c = fgetc(data);
            if(c == '\n')
                numberOfLine++;
        }while(c != EOF);

        printf("number of line : %d\n", numberOfLine);

        rewind(data);

        c = 0;

        for(int i = 0; i < (numberOfLine / 2); i++){
            clearBuffer(email_chain, pwd_chain);
            fgets(email_chain, MAX_SIZE, data);
            fgets(pwd_chain, MAX_SIZE, data);
            goodChain(email_chain, pwd_chain);
            if(strcmp(good_email_chain, email_chain) == 0 && strcmp(good_pwd_chain, pwd_chain) == 0){
                printf("%s  :  %s  : true\n", email_chain, pwd_chain);
            }else{
                printf("%s  :  %s  : false\n", email_chain, pwd_chain);
            }
        }

    }
    else
    {
        printf("Erreur lors de l'ouverture du fichier");
    }

    printf("\n");   
    
    fclose(data);
    return 0;
}

void goodChain(char *email_chain, char *pwd_chain){
    char *position_Email = NULL, *position_Pwd = NULL;

    position_Email = strchr(email_chain, '\n');
    if(position_Email != NULL)
        *position_Email = '\0';

    position_Pwd = strchr(pwd_chain, '\n');
    if(position_Pwd != NULL)
        *position_Pwd = '\0';
}

void clearBuffer(char *email_chain, char *pwd_chain){
    for(int i = 0; i < strlen(email_chain); i++)
        email_chain[i] = 0;
    for(int c = 0; c < strlen(pwd_chain); c++)
        pwd_chain[c] = 0;
}