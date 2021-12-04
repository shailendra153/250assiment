#include<stdio.h>
	void sum(int n){
		int i=1;
		int sum=0;
		while(i<=n){
		sum=sum+i;
		i++;
		}
		printf("The sum of %d term  is %d\n",n,sum);
	}
	int main(){
	int n;
	printf("Enter Number of term\n");
	scanf("%d",&n);
	sum(n);
	return 0;
	}
