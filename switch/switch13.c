#include <stdio.h>
void switch13() {
  char ch;
  int a, b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &ch);
  printf("Enter two operands: ");
  scanf("%d %d", &a, &b);

  switch (ch) {
    case '+':
      printf("%d + %d = %d", a, b, a + b);
      break;
    case '-':
      printf("%d - %d = %d", a, b, a - b);
      break;
    case '*':
      printf("%d * %d = %d", a, b, a * b);
      break;
    case '/':
      printf("%d / %d = %d", a, b, a / b);
      break;
    
    default:
      printf(" operator is not correct");
  }

  
}
int main(){

switch13();
return 0;
}

