#include <stdio.h>

int armstrong(int num) 
{
    int r, sum, n, digits;
    sum = 0;
    n = num;
     while(num > 0)
    {
        r = num % 10;
        sum = sum +r*r*r;
        num = num / 10;
    }
        return (n == sum);
}
int prime(int num) 
{
    int i;
    
    for(i=2; i<=num/2; i++)  
    {  
        if(num%i == 0)  
        {
            return 0;
        }  
    } 
    
    return 1; 
}

int perfect(int num) 
{
    int i, sum, n;
    sum = 0;
    n = num;
    
    for(i=1; i<n; i++)  
    {  
        if(n%i == 0)  
        {  
            sum += i;  
        }  
    }
    
    return (num == sum);
}

int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    if(prime(num))
    {
        printf("%d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not Prime number.\n", num);
    }
    
    if(armstrong(num))
    {
        printf("%d is Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not Armstrong number.\n", num);
    }
    if(perfect(num))
    {
        printf("%d is Perfect number.\n", num);
    }
    else
    {
        printf("%d is not Perfect number.\n", num);
    }
    
    return 0;
}





