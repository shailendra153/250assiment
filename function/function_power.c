#include <stdio.h>

float powe(float base, int expo)
{
    if(expo == 0)
        return 1;
    else if(expo > 0)
        return base * powe(base, expo - 1);
    else
        return 1 / powe(base, -expo);
}
int main()
{
    float base, power;
    int expo;
    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter exponent: ");
    scanf("%d", &expo);
    power = powe(base, expo); 
    printf("%.2f ^ %d = %f", base, expo, power);
    
    return 0;
}

