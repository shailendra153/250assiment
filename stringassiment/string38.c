#include<stdio.h>
#include <string.h>
 
void deleteblankspaces(char *s)
{
	int  i,k=0;
 
	 for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
 
     	
     	if(s[i]==' '|| s[i]=='\t')
     	{
		  k++;
		  i--;
	    }
     	
    }
}
 
 
 
 
int main()
{
 
    char s[1000];
  
    printf("Enter  the string : ");
    gets(s);
      
     
    deleteblankspaces(s);
    printf("string after removing all duplicates:");
 
    printf("%s",s);
 
	return 0;
 
     
     
}
