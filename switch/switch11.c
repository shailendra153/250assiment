#include<stdio.h>

void switch11(){

int num;
 printf("enter number = ");
 scanf("%d",&num);
 
   switch(num%2==0){
   
    case 1:
           printf("even\n");
           break;
           
    case 0:
           printf("odd\n");
           break;
   }
}
int main(){

 switch11();
return 0;              
}
