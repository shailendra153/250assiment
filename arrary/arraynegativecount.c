 #include <stdio.h>
 void negative(int a[],int n)
{
    int i,count=0;;
   
   
      for(i=0; i<n; i++)
    {
          if(a[i]<0)
          count++;
		           
    }
     printf("Negative  numbers in array: %d",count);
    
}
int main(){
int a[100],n,i;
 printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
negative(a,n);
return 0;
}
