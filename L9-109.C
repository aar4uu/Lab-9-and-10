//PROGRAM 109
#include<stdio.h>

int main()
{
    int var,value,*ptr;
    ptr = &var;

    printf("Enter the initial value of variable: ");
    scanf("%d",&var);
    printf("\n%d is the initial value of variable",var);

    printf("\nEnter the new value of variable: ");
    scanf("%d",&value);
    *ptr = value;
    printf("\n%d is the modified value of variable",var);
return 0;
    
}
