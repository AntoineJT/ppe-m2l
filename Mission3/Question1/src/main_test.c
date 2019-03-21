#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void str_set_upper(char *str){
    unsigned int len = strlen(str);
    register char buff;
    for(register unsigned int i=0; i<len; i++){
        buff = *(str+i);
        if(buff>0x60 && buff<0x7B)
            *(str+i)-=0x20;
    }
}

int main(void){
    SetConsoleOutputCP(65001); // Set encoding character set to UTF-8
    unsigned int i = 0;
    unsigned int decal;
    char text[26];

    puts("Ce programme permet de chiffrer une chaîne de 26 caractères au maximum à l'aide d'un code de César");
    do {
        printf("Saisissez le décalage (entier, max 25) : ");
        scanf("%u",&decal);
    } while(decal>=26);
    do {
        printf("Saisissez la chaîne à chiffrer (26 chars max) : ");
        while(getchar()!='\n'); // fflush stdin
    } while(fgets(text, 26, stdin) == NULL);
    str_set_upper(text);
    while(text[i]!='\n'){
        text[i]+=(text[i] != ' ') ? decal : 0;
        text[i]=(text[i]-0x40)%26;
        text[i]+=0x40;
        i++;
    }
    printf("Chaîne chiffrée : %s",text);
    return EXIT_SUCCESS;
}
