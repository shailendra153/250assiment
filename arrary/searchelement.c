 #include <stdio.h>
 void search(int a[],int n)
{
    int i,num,flag=0;;
    printf("Enter the num : ");
    scanf("%d", &num);
    for(i=0; i<n; i++)
    {
        if(a[i]==num)
        {
			printf("element found ");
			flag=1;
                            break;         
         }
       
    }
    if(flag==0)
    printf("element  not  found");
  	
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
search(a,i);

return 0;
}
