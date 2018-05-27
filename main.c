
#include <stdio.h>

char * readFile2(char *pFileName) {
    FILE * archivo;
    char *fileContent;
    archivo = fopen(pFileName , "r");
    int size;

    if (archivo == NULL){
        printf("\nError de apertura del archivo.java \n\n");
    }
    else {

        fseek(archivo, 0, SEEK_END); // seek to end of file
        size = ftell(archivo); // get current file pointer
        fseek(archivo, 0, SEEK_SET);

        fileContent = malloc(size);
        fgets(fileContent,size,archivo);
    }
    fclose(archivo);

    return fileContent;
}