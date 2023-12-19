#include <stdio.h>
void main (){
int a,b,c, choice;
printf("Enter first no: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);

printf(" 1---- Addition\n 2---- Subtraction\n 3---- Multiplication\n 4----division\n 5----Exit\n");

printf("Enter your choice");
scanf("%d", & choice);
switch (choice){
  case 1:
  c = a+b;
  break;
  case 2:
  c = a-b;
  break;
  case 3:
  c = a*b;
  break;
  case 4:
  c = a/b;
  break;
  case 5:
  return;
  default:
  printf("invalid Choice");
}
printf ("%d", c);
}