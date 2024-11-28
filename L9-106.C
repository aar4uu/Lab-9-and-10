//PROGRAM 106
#include<stdio.h>
//declaration of the struct
struct ITEM
{
    char name[100];
    int quantity;
    float price;
    float amount;
};
//user defined function to calculate the amount
float calculateAmount(struct ITEM s)
{
    s.amount = s.price * s.quantity;
    return s.amount;
}

int main()
{   //taking user input
    struct ITEM s1;
    printf("Enter the name of the item: ");
    scanf("%s",s1.name);
    printf("Enter the quantity of item: ");
    scanf("%d",&s1.quantity);
    printf("Enter the price of the item: ");
    scanf("%f",&s1.price);
    
    s1.amount = calculateAmount(s1); // function call to calculate amount
    
    printf("The amount of %s is %f",s1.name,s1.amount); //printing output
    return 0;

    
}

