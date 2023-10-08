#include <stdio.h>

int main()
 {
  int a,b,c;
    printf("Enter any Number\n");
    scanf("%d", &a);

    printf("Enter another Number\n");
    scanf("%d", &b);
    if (b == 0)
    {
      printf("division by zero is impossible\n");
      return 0;
    }  
    c = a / b;
    printf("Division of 2 numbers: %d", c);
    return 0;
}
