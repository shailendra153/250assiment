#include <stdio.h>
void natural(int lower, int upper)
{
    if(lower > upper)
        return;
    
    printf("%d, ", lower);
    natural(lower + 1, upper);
}
int main()
{
    int lower, upper;    
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);
    printf("All natural numbers from %d to %d are: ", lower, upper);
    natural(lower, upper);
    
    return 0;
}

