//PROGRAM 101
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("LNMIITSTUDENT.DAT","a");
    fprintf(fptr,"%s","This file is on append Mode");
    fclose(fptr);
    return 0;
}
