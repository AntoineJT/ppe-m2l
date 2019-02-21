#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001); // Set encoding character set to UTF-8
    unsigned int i = 0;
    unsigned int decal;
    char text[26];

    puts("Ce programme permet de chiffrer une chaîne de 26 caractères au maximum à l'aide d'un code de César");
    printf("Saisissez le décalage (entier) : ");
    scanf("%u",&decal);
    do {
        printf("Saisissez la chaîne à chiffrer (26 chars max) : ");
        while(getchar()!='\n'); // fflush stdin
    } while(fgets(text, 26, stdin) == NULL);
    while(text[i]!='\n'){
        text[i]+=((text[i] != ' ') ? decal : 0);
        i++;
    }
    printf("Chaîne chiffrée : %s",text);
    return EXIT_SUCCESS;
}
