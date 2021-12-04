#include<stdio.h>
 void switch3(){
  int a,b,sum;
  char ch;
   printf("enter your choice");
   scanf("%c",&ch);
   
  switch(ch){ 
  
         case '+':
               printf("enter two number  = ");
               scanf("%d%d",&a,&b);
                     sum=a+b;
               printf("add = %d  \n",sum);      
               break;
         case '-':
               printf("enter two number  = ");
               scanf("%d%d",&a,&b);
                     sum=a-b;
               printf("sub = %d  \n",sum);      
               break;
         case '>':
               printf("enter two number  = ");
               scanf("%d%d",&a,&b);
                     sum=a>b;
               printf("greater = %d \n",sum);      
               break;
         case '*':
               printf("enter two number  = ");
               scanf("%d%d",&a,&b);
                     sum=a*b;
               printf(" eqaul %d  \n",sum);                           
               break;
         default :
               printf("bhaiya apne wrong operator enter kiya hai"); 
               }  
  }             
int main(){

    switch3();
    
   return 0;
}                     
