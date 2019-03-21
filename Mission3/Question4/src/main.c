#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef unsigned char boolean;

char decodeChar(const char car){
    const char c_ac[] = "?HYLUJPVREAKBNDOFSQZCWMGITX";
    unsigned int i = 1;
    if (car == ' ' || car == '\n')
        return car;
    else
        if (car<0x41 || car>0x90)
            return c_ac[0];
    if (c_ac[0]!=car){
        while(c_ac[i]!=car)
            i++;
        return i+0x40;
    } else
        return c_ac[0];
}

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
    char text[26];
    unsigned int i = 0;

    puts("Ce programme permet de déchiffrer un message sans ponctuation de 26 lettres tout au plus");
    do {
        printf("Saisissez au max 26 caractères alphabétiques : ");
        // while(getchar()!='\n'); // fflush stdin
    } while(fgets(text, 26, stdin) == NULL);
    str_set_upper(text);
    while(text[i]!='\0'){
        text[i] = decodeChar(text[i]);
        i++;
    }
    printf("Chaîne déchiffrée : %s",text);
    return EXIT_SUCCESS;
}
