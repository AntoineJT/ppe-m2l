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

char getEncodedChar(char car, unsigned int decal){
    str_set_upper(&car);
    if (car == ' ')
        return ' ';
    unsigned int val = car-0x41;
    if (val>25)
        return '?';
    val = (val+decal)%26;
    return val+0x41;
}

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
        text[i]=getEncodedChar(text[i], decal);
        i++;
    }
    printf("Chaîne chiffrée : %s",text);
    return EXIT_SUCCESS;
}
