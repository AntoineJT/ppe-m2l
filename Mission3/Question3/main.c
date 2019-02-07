#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

unsigned int getIndOnAC(const char car){
    unsigned int val;
    val=car-0x41;
    if (val>25)
        val=val-0x20;
    return (val<0||val>25) ? 0 : val+1;
}

int main(void){
    SetConsoleOutputCP(1252);
    const char c_ac[] = "?HYLUJPVREAKBNDOFSQZCWMGITX";
    char *text = malloc(26*sizeof(char));
    unsigned int i=0;

    puts("Ce programme permet de CHIFFRER un message sans ponctuation de 26 lettres tout au plus");
    do {
        printf("Saisissez au max 26 caractères alphabétique : ");
        // while(getchar()!='\n'); // fflush stdin
    } while(!scanf("%26s",text));
    while(text[i]!='\0'){
        text[i] = c_ac[getIndOnAC(text[i])];
        i++;
    }
    printf("Chaîne chiffrée : %s",text);
    return EXIT_SUCCESS;
}
