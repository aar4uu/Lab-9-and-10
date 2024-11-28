//program 100
#include<stdio.h>
struct StudentInfo
{
    int rollNo;
    char name[100];
    float totalMarks;
}s;
int main()
{  
    FILE *fptr;
    fptr = fopen("LNMIITSTUDENT.JAVA","w");
    int N;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    getchar();

    for(int i =0; i < N; i++)
    {   
        printf("Enter the details of student\n");
        printf("Enter Roll No.: ");
        scanf("%d",&s.rollNo);
        getchar();
        printf("Enter student Name: ");
        gets(s.name);
        printf("Enter Total Marks: ");
        scanf("%f",&s.totalMarks);

        fprintf(fptr,"%s","Roll_No:");
        fprintf(fptr,"%d",s.rollNo);
        fprintf(fptr,"%s","\n");

        fprintf(fptr,"%s","Name:");
        fprintf(fptr,"%s",s.name);
        fprintf(fptr,"%s","\n");

        fprintf(fptr,"%s","Total Marks");
        fprintf(fptr,"%f",s.totalMarks);
        fprintf(fptr,"%s","\n");

        fprintf(fptr,"%s","\n");


    }
    fclose(fptr);
    return 0;
    
}
