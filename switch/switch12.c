#include<stdio.h>

void switch12(){

int num;
 printf("enter number = ");
 scanf("%d",&num);
     
     switch(num>0){
     
     case 1:
            printf("positive\n");
            break;
     case 0:
            printf("negative\n");       
            break;
     }
 }
int main(){
    switch12();
    return 0;
}              
