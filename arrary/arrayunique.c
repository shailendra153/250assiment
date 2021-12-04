#include <stdio.h>
void unique(int a[],int n)
{
    int count=0;
    int i, j, k;
     
    printf("\nThe unique elements found in the array are: \n");
    for(i=0; i<n; i++)
    {
        count=0;
        for(j=0,k=n; j<k+1; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i!=j)
            {
		       if(a[i]==a[j])
              {
                 count++;
               }
             }
        }
       if(count==0)
        {
          printf("%d ",a[i]);
        }
    }
       printf("\n\n");
}
int main(){
int a[100],n,i;
  printf("\n\nPrint all unique elements of an array:\n");
       printf("------------------------------------------\n");	
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&a[i]);
	    }

unique(a,n);
return 0;
}
