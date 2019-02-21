#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

unsigned int getIndOnAC(const char car){
    if (car == ' ' || car == '\n')
        return 27; // ugly fast workaround
    unsigned int val = car-0x41;
    if (val>25) // S'il ne s'agit pas de majuscules, alors retrancher l'offset entre les majuscules et minuscules
        val=val-0x20;
    return val>25 ? 0 : val+1; // S'il s'agit pas de caractères alphanumériques, retourner son indice, sinon renvoyer l'indice du caractère d'erreur '?'
}

int main(void){
    SetConsoleOutputCP(65001); // Set encoding character set to UTF-8
    const char c_ac[] = "?HYLUJPVREAKBNDOFSQZCWMGITX ";
    char text[26];
    unsigned int i = 0;

    puts("Ce programme permet de CHIFFRER un message sans ponctuation de 26 lettres tout au plus");
    do {
        printf("Saisissez au max 26 caractères alphabétique : ");
        // while(getchar()!='\n'); // fflush stdin
    } while(fgets(text, 26, stdin) == NULL);
    while(text[i]!='\0'){
        text[i] = c_ac[getIndOnAC(text[i])];
        i++;
    }
    printf("Chaîne chiffrée : %s",text);
    return EXIT_SUCCESS;
}
