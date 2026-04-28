#include <stdio.h>

int main(){
    FILE *fptr;

    // creat file (filename.txt)
    fptr = fopen ("filename.txt", "w");

    // close file
    fclose(fptr);

    return 0;
}