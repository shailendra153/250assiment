// c programme to add two matrix
#include<stdio.h>
void addmatrix(int a[10],int b[10],int m,int n){

for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    b[i][j]=a[i][j]+b[i][j];
        }    
}
printf("\nThe Sum of matrix A and B is \n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    printf("%5d",b[i][j]);
    
    }
    printf("\n");
}
}
int main(){
int a[10][10],b[10][10];
int i,j,m,n;
printf("Enter the size of matrix\n");
scanf("%d%d",&m,&n);
printf("Enter %d*%d A matrix",m,n);
for(i=0;i<m;i++){
    printf("Enter %d Element of %d row\n",n,i+1);
    for(j=0;j<n;j++){
    scanf("%d",&a[i][j]);
    
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    printf("%5d",a[i][j]);
    
    }
    printf("\n");
}
printf("Enter %d*%d B matrix",m,n);
for(i=0;i<m;i++){
    printf("Enter %d Element of %d row\n",n,i+1);
    for(j=0;j<n;j++){
    scanf("%d",&b[i][j]);
    
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    printf("%5d",b[i][j]);
    
    }
    printf("\n");
}
addmatrix(a,b,m,n);

return 0;}
