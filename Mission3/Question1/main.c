#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(1252);
    unsigned int i=0;
    unsigned int decal;
    char *text = malloc(26*sizeof(char));

    puts("Ce programme permet de chiffrer une cha�ne de 26 caract�res au maximum � l'aide d'un code de C�sar");
    printf("Saisissez le d�calage (entier) : ");
    scanf("%u",&decal);
    do {
        printf("Saisissez la cha�ne � chiffrer (26 chars max) : ");
        while(getchar()!='\n'); // fflush stdin
    } while(!scanf("%26s",text));
    while(text[i]!='\0'){
        text[i]+=decal;
        i++;
    }
    printf("Cha�ne chiffr�e : %s",text);
    return EXIT_SUCCESS;
}
