#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
 int and = 0, or = 0, xor = 0;
  for(int i = 1; i <= n; i++)
  {
   for(int j = i + 1; j <= n; j++)
   {
    int tAnd, tOr, tXor;
    if ((i & j) < k) 
    { 
     tAnd = i & j;
     if(tAnd > and){ and = tAnd; }
    }
    if((i | j) < k)
    {
     tOr = i | j;
     if(tOr > or){ or = tOr; }
    }
    if((i ^ j) < k)
    {
     tXor = i ^ j;
     if(tXor > xor){ xor = tXor; }
    }
   }
  }
  printf("%d\n", and);
  printf("%d\n", or);
  printf("%d\n", xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
