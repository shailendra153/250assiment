#include<stdio.h>
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
void printperfect(int start, int end){
	int num;
	num=start;
	while(num!=end){
		if(perfect(num))
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
printperfect(start,end);
return 0;
}
