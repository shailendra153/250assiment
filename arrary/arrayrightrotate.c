#include<stdio.h>
void rotate(int a[],int n){
int i,t;
t=a[0];
for(i=0;i<n-1;i++){
a[i]=a[i+1];
}
a[n-1]=t;
printf("\nAfter right Rotate\n");
for(i=0;i<n;i++){
printf("%4d",a[i]);
}


}



int main(){
int a[10],n,i;
printf("Enter Number of elements\n");
scanf("%d",&n);
printf("Enter %d element one by one\n",n);
for(i=0;i<n;i++){
printf("Enter %d term\n",i+1);
scanf("%d",&a[i]);
}
printf("\nBefore right Rotate\n");
for(i=0;i<n;i++){
printf("%4d",a[i]);
}
rotate(a,n);



return 0;
}
