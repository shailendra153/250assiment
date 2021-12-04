#include <stdio.h>;
int reverse(int num)
{
    int rev= 0;
    int r;
    while(num>0){
    r=num%10;
    rev=rev*10+r;
    num=num/10;
    
    }
    return rev;
}
int main()
{
    int num, rev;
    
    printf("Enter any number = ");
    scanf("%d", &num);
    rev = reverse(num);
   
    printf("Reverse of no. is %d", rev);
    return 0;
}