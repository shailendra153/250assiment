#include <stdio.h>

int prime(int num)   
{  
    int i;  
      
    for(i=2; i<=num/2; i++)    
    {    
        if(num % i == 0)    
        {  
            return 0;  
        }    
    }   
      
    return 1;   
}


void printprimes(int start, int end)
{
    printf("All prime number between %d to %d are: ", start, end);
    
    while(start <= end)
    {
        if(prime(start))
        {
            printf("%d, ", start);
        }
        
        start++;
    }
}

int main()
{
    int start, end;
    
    printf("Enter the Range  for prime number :   ");
    scanf("%d%d", &start, &end);
    printprimes(start, end);
    
    return 0;
}



