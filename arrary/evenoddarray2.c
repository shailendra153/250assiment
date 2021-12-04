 #include <stdio.h>
  void evenodd(int a[],int n)
{
    int b[10],c[20],i,j,k,n1,n2 ;
   
 
    j=k=0;
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
          b[j++]=a[i];
        else
          c[k++]=a[i];
 
    }
     
    printf(" \n even array \n");
 
       for(i=0; i<j; i++)
    {
        	printf("%d  ",b[i]);
    }
    printf(" \n odd array \n");
 
       for(i=0; i<k; i++)
    {
        	printf("%d  ",c[i]);
    }
     
} 
int main(){
int a[10],n,i;
   printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("\n original array  \n");
 
     for(i=0; i<n; i++)
    {
        	printf("%d  ",a[i]);
    }
    evenodd(a,n);
return 0;
}
