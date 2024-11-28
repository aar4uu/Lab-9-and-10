//PROGRAM 99

#include<stdio.h>
int main()
{
    FILE *fptr; //declaration of file type pointer
    //opening file in write mode
    fptr = fopen("Text.txt","w");
    //writing into the file
    fprintf(fptr,"%s","AARJU");
    fclose(fptr); //closing file

    //opening file in read mode
    fptr = fopen("Text.txt","r");
    char string[100];
    fscanf(fptr,"%s",string); //reading string from file

    puts(string);
    fclose(fptr);
    //counting vowels in the string
    fptr = fopen("Text.txt","r");

    int vowelCount =0;
    char ch;
    fscanf(fptr,"%c",&ch);
    while( !feof(fptr))
    {
        switch(ch)
        {
            case 'a': 
            case 'e':
            case 'i':
            case 'o':
            case 'u':vowelCount++;
        }
    fscanf(fptr,"%c",&ch);
   
    }

    fclose(fptr);
    printf("%d",vowelCount);


return 0;

}
