//Remove the last occurrence of a word in a given string.
#include<stdio.h>
#include <string.h>
int stringlength(char *s)
{
     int j;
     for(j=0;s[j];j++);
	 
	 return j;
      
     
 	 
}
void deletechar(char *s,char c)
{
	int i,temp=1,n;
 
    i=n=stringlength(s); 
    
 
      while(i)  
	{
       if(temp)
        {
            i--;
          	 if(c==s[i])
          	  {
				temp=0;
				s[i]=s[i+1];
					i++;
		     }
		             
 
	    }
	    else
	     {
	     	if(i==n)
		    break;
	     	
		   s[i]=s[i+1];
		   i++;
		   
	     }
	   
    }
	   
	   
  	 
}
 
 
int main()
{
 
    char s[1000],c;
  
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character: ");
    c=getchar();
    deletechar(s,c);
    printf("string after removing last occurance of character %c:\n ",c);
 
    printf("%s",s);
 
	return 0;
 
     
     
}
