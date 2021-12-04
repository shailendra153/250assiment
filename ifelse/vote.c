#include<stdio.h>
void vote(int age){
if(age>17)
printf("You are elegible for vote\n");
else
printf("You are not elegible for not\n");


}
int main()
{
  int age;
printf("Enter your age\n");
scanf("%d",&age);
vote(age);
    return 0;
}