#include <stdio.h>
 void swap(int *x, int *y)
{int t;
    t=*x;
    *x=*y;
    *y=t;
}

 
int main()
{
    int num1, num2;
    printf("\nEnter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("\nThe numbers before swapping are Number1= %d Number2 = %d", num1, num2);
    swap(&num1, &num2);    
    printf("\nThe numbers after swapping are Number1= %d Number2 = %d", num1, num2);

return 0;
}
 
