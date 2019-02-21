#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001); // Set encoding character set to UTF-8
    unsigned int i = 0;
    unsigned int decal;
    char *text = malloc(26*sizeof(char));
  
    do {
        printf("Saisissez la chaîne à chiffrer (26 chars max) : ");
        while(getchar()!='\n'); // fflush stdin
    } while(!scanf("%26s",text));
    while(text[i]!='\0'){
        text[i]+=decal;
        i++;
    }
    printf("Chaîne chiffrée : %s",text);
    return EXIT_SUCCESS;
}
