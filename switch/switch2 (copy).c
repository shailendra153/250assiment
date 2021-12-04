#include<stdio.h>
 void switch2(){
 
 int day;
     printf("enter day number");
     scanf("%d",&day);
 
     switch(day){ 
     
      case 1:
          printf("monday\n");
          break;
      case 2:
          printf("tuesday\n");
          break;
      case 3:
          printf("wednesday\n");
          break;
      case 4:
          printf("thursday\n");
          break;
      case 5:
          printf("friday\n");
          break;
      case 6:
          printf("saturday\n");
          break;
      case 7:
          printf("sunday\n");
          break;
      default :
          printf("invalid number\n");
 }
}
int main(){
    switch2();
  return 0;
}                                          
