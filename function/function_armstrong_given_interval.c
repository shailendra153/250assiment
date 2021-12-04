#include<stdio.h>

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
void printarmstrong(int start, int end){
	int num;
	num=start;
	while(num!=end){
		if(armstrong(num))
		printf("%4d",num);
	num++;
	}
}

int main(){
int start,end;
printf("Enter Start :\n");
scanf("%d",&start);
printf("Enter End :\n");
scanf("%d",&end);
printarmstrong(start,end);
return 0;
}
