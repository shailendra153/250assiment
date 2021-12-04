#include<stdio.h>

void switch8(){

     int month,day;
     printf("enter month   = ");
     scanf("%d",&month);
     
     switch(month){
     
      case 4:
      case 6:
      case 9:
      case 11:
              day=30;
              break;
      case 1:        
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
              day=31;
              break;
      case 2:

              day=28;
              break; 
      default :
              day=0;
     }
   if(day){  
       printf("number of day in %d month is = %d\n",month,day);
   }    
   else
       printf("invalid"); 
}
int main(){

 switch8();
 return 0;
           
}                
                                 
