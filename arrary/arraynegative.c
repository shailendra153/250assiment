#include <stdio.h>
 void negative(int a[],int n)
{
   int i;
 printf("\nAll negative elements in array are : ");
    for(i=0; i<n; i++)
    {
                if(a[i] < 0)
        {
            printf("%d\t", a[i]);
        }
    }
}
int main(){
 int a[100],i,n;
      printf("Enter size of the array : ");
    scanf("%d", &n);
  printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    negative(a,n);

return 0;
}
