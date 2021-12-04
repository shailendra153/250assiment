#include<stdio.h>

void switch9(){

char ch;
     printf("enter your choice");
     scanf("%c",&ch);
     
     switch(ch){

       case 'a':
               printf("vowel");
               break;
       case 'e':
               printf("vowel\n");
               break;
       case 'i':
               printf("vowel\n");
               break;
       case 'o':
               printf("vowel\n");
               break;
       case 'u':
               printf("vowel\n");
               break;
       case 'A':
               printf("vowel\n");
               break;
       case 'E':
               printf("vowel\n");
               break;
       case 'I':
               printf("vowel\n");
               break;
       case 'O':
               printf("vowel\n");
               break;
       case 'U': 
               printf("vowel\n");
               break;
       default :
               printf("constant\n");
               break;
      }
}                          
int main(){

 switch9();
 return 0;
} 
 
