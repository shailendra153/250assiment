
#include <stdio.h>
void number(int a[],int n)
{
      int i, j, count = 0;
     for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in array = %d", count);
}
int main(){
  int a[100],i,n;
   printf("Enter n of the aay : ");
    scanf("%d", &n);

    printf("Enter elements in aay : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
  number(a,n);
return 0;
}
