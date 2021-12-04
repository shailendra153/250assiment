#include<stdio.h>

void circumandcylender(){

  float rad,height,volume,circum;   
  int choice;
  
    printf("enter your choice   = ");
    scanf("%d",&choice);
    
    switch(choice){
               
           case 1:   
                        printf("1.circumference\n");  
                       printf("enter radius\n");
                       scanf("%f",&rad); 
                     circum=2*3.14*rad;
                       printf("circumferance = %.2f\n",circum);

                       break;
           case 2: 
                     printf("2.volume of cylender\n");
                      printf("enter radius\n");
                      scanf("%f",&rad);
                      printf("enter height\n");
                      scanf("%f",&height);  
                      volume=3.14*height*rad*rad;
                       printf("volume = %.2f\n",volume);
                       
                       break;
           default :
                     printf("wrong formula");
                       break;  
                   }    
 }
                                 
int main(){

  circumandcylender();
  return 0;
}  
