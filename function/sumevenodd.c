#include <stdio.h>


int sumofevenodd(int start, int end);


int main()
{
    int start, end, sum;

    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    
    printf("Sum of even/odd numbers between %d to %d = %d\n", start, end, sumofevenodd(start, end));
    
    return 0;
}

int sumofevenodd(int start, int end) 
{
   
    if(start > end)
        return 0;
    else
        return (start + sumofevenodd(start + 2, end));
}