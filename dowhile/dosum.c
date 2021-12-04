#include<stdio.h>
	void sum(int n){
		int i=1;
		int sum=0;
		do{
		sum=sum+i;
		i++;
		}
		printf("The sum of %d term  is %d\n",n,sum);
	}
	while(i<=n);
	int main(){
	int n;
	printf("Enter Number of term\n");
	scanf("%d",&n);
	sum(n);
	return 0;
	}
