#include <stdio.h>
int main()
{
  int num1;
  printf("enter num1");
  scanf("%d", &num1);

  int num2;
  printf("enter num2");
  scanf("%d", &num2);

  if (num1 < num2)
  {
    printf("Smallest number is : %d", num1);
  }
  else
  {
    printf("Smallest number is : %d", num2);
  }

  return 0;
}
