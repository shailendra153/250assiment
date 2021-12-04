#include<stdio.h>

void profitloss(int cp,int sp){
if(cp>sp)
printf("You got %d loss\n",cp-sp);
else if(sp>cp)
printf("You got %d profit \n",sp-cp);
else
printf("You neither got loss nor profit\n");


}
int main()
{
  int cp,sp;
printf("Enter cost price and selling price\n");
scanf("%d%d",&cp,&sp);
profitloss(cp,sp);
        return 0;
}