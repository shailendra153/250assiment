//Replace the last occurrence of a character with another in a string.
#include<stdio.h>
#include <string.h>
 
void replacechar(char *s,char c1,char c2)
{
	int i;
  
     	
    for(i=0;s[i];i++) 
	{  
		if(s[i]==c1)
		{
		   s[i]=c2;
		   break;
	    }
	}
  
}
 
 
int main()
{
 
    char s[1000],c1,c2;  
  
    printf("Enter  the string : ");
    gets(s);
    
	printf("Enter a character replace: ");
    c1=getchar();
    getchar();
    printf("\nEnter character to replace  %c with : ",c1);
    c2=getchar();
    printf("\n before replace:%s",s);
 
    replacechar(s,c1,c2);
	   
    printf("\nafter replace:%s",s);
 	 
     
    return 0;
 
     
     
}