#include <stdio.h>


char * readFile2(char *pFileName) {
    FILE *fileptr;
    char *buffer;
    long filelen;

    fileptr = fopen(pFileName, "rb");  //Abre el archivo en binario
    fseek(fileptr, 0, SEEK_END);
    filelen = ftell(fileptr);
    rewind(fileptr);

    buffer = (char *)malloc((filelen+1)*sizeof(char)); // Enough memory for file + \0
    fread(buffer, filelen, 1, fileptr); // Read in the entire file
    fclose(fileptr);

    return buffer;