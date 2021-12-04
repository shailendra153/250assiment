#include<stdio.h>
 int main(){
        
        float feh,cel;
        int ch;
         printf("enter your choice");
         scanf("%d",&ch);
        if(ch==1)
        {
         printf("enter tem in fah"); 
         scanf("%f",&feh);
          cel = (feh*9/5.0f)+32;
         printf("temp in celcius",cel);
          
          
