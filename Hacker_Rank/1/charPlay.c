#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  char ch, s[20], sen[100];

  scanf("%c", &ch);  
  scanf("%s", s);
  scanf("\n");
  scanf("%[^\n]s", sen);
  
  printf("%c\n", ch);
  printf("%s\n", s);
  printf("%s\n", sen);
  
  return 0;
}