#include<stdio.h>

void insert (int a[5],int n,int p){
int i;
printf("Array before insert\n");
for(i=0;i<5;i++){
printf("%4d",a[i]);
}
for(int i=4;i>=p-1;i--){
a[i+1]=a[i];
}
a[p-1]=n;
printf("Array after insert\n");
for(i=0;i<=5;i++){
printf("%4d",a[i]);
}
}

int main()
{
  int a[6],n,p;
a[0]=1,a[1]=2,a[2]=3,a[3]=5,a[4]=6;
printf("Enter position: \n");
scanf("%d",&p);
printf("Enter value: \n");
scanf("%d",&n);
insert(a,n,p);
    return 0;
} 
