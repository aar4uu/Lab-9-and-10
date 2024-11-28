//PROGRAM 107

#include<stdio.h>
#include<math.h>
//function to count digits
int countDigits(int n)
{   int count =0;
    while(n != 0)
    {
        count++;
        n  /= 10;
    }
    return count;
}
//function to store each digit in array
void storeDigits(int num,int arr[],int digits)
{
    for(int i =0; i <digits; i++ )
    {
        arr[digits-i-1] = num%10;
        num =num/10;
    }
}
//function to swap integer variables
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b; 
    *b =t;
}

int flipNum(int digits, int arr[],int n)
{   int answer=0;
    for(int i =0; i < n/2; i++)
    {
        swap(&arr[digits-1-i],&arr[digits-n+i]);
    }
    for(int i =0; i < digits;i++)
    {
        answer = answer + (pow(10,digits-i-1)*arr[i]); 
    }
    return answer;
}



int main()
{   int num,n;
    printf("Enter the number and the value of N: ");
    scanf("%d %d",&num,&n);

    int digits = countDigits(num);
    if(n >digits)
    {
        printf("Invalid Input");
    }
    else
    {
        int arr[digits];
        storeDigits(num,arr,digits);
        int ans = flipNum(digits,arr,n);
    printf("%d",ans);
    }
  return 0;  
}
