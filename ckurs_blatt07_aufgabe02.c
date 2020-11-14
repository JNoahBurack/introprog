#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    if (argc < 3) {
    printf("Aufruf: %s <anzahl> <bundesland>\n", argv[0]);
    printf("Beispiel: %s 100 Bayern\n", argv[0]);
    printf("Klein-/Großschreibung beachten!\n");
    exit(1);
    }
    int anzahl = atoi(argv[1]);
    char *bundesland = argv[2];
    
    // Statisch allokierter Speicher
    char staedte[MAX_LAENGE_ARR][MAX_LAENGE_STR];
    char laender[MAX_LAENGE_ARR][MAX_LAENGE_STR];
    int bewohner[MAX_LAENGE_ARR];
    
    int len = read_file("staedte.csv", staedte, laender, bewohner);
    
    // Hier implementieren
    char* zeile=(char*)malloc(MAX_LAENGE_STR);
    
    if(zeile==NULL){
        perror("fehler bei malloc");
        exit(1);
    }
    
    //write_file("staedte.csv", staedte, laender, bewohner);
    
    //laender voraussetzung
    
    for(int i=0; i<len; i++){
        if(bewohner[i]>anzahl && strncmp(laender[i], bundesland, MAX_LAENGE_STR)){
            snprintf(array_string[i], MAX_LAENGE_STR, 
            "Die Stadt %s hat %d Einwohner", staedte[i], bewohner[i]);   
        }
    }
    
    printf("Die Stadt %s hat %d Einwohner", );
    // Dynamisch allozierter Speicher muss hier freigegeben werden.
}