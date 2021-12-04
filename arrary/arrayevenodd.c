 #include <stdio.h>
 void evenodd(int a[],int n)
{
    int i,even=0,odd=0;
   
   
 
     for(i=0; i<n; i++)
    {
          if(a[i]%2==0)
          even++;
          else
          odd++;
		           
    }
     printf("even numbers in array: %d",even);
     printf("\n odd numbers in array: %d",odd);
 
 
    return 0;
}
int main(){
 int a[10],n,i;
 printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
evenodd(a,n);
return 0;
}
