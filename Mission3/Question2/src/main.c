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

char getDecodedChar(char car, unsigned int decal){
    str_set_upper(&car);
    if (car == ' ' || car == '\n')
        return car;
    unsigned int val = car-0x41;
    if (val>25)
        return '?';
    val = (val<decal) ? 26-decal : val-decal;
    return val+0x41;
}

int main(void){
    SetConsoleOutputCP(65001); // Set encoding character set to UTF-8
    unsigned int i = 0;
    unsigned int decal;
    char text[26];

    puts("Ce programme permet de déchiffrer une chaîne de 26 caractères au maximum à l'aide d'un code de César");
    printf("Saisissez le décalage (entier) : ");
    scanf("%u",&decal);
    do {
        printf("Saisissez la chaîne à déchiffrer (26 chars max) : ");
        while(getchar()!='\n'); // fflush stdin
    } while(fgets(text, 26, stdin) == NULL);
    while(text[i]!='\0'){
        text[i]=getDecodedChar(text[i],decal);
        i++;
    }
    printf("Chaîne déchiffrée : %s",text);
    return EXIT_SUCCESS;
}
