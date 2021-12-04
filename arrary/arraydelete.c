#include<stdio.h>

void delete (int a[],int p){
int i;
printf("Array before delete\n");
for(i=0;i<=5;i++){
printf("%4d",a[i]);
}
for(i=p-1;i<5;i++){
a[i]=a[i+1];
}

printf("Array after delete\n");
for(i=0;i<5;i++){
printf("%4d",a[i]);
}
}

int main()
{
  int a[6],p;
a[0]=1,a[1]=2,a[2]=3,a[3]=4,a[4]=5,a[5]=6;
printf("Enter position: \n");
scanf("%d",&p);

delete(a,p);
    return 0;
} 