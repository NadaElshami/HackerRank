#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int n,m;
  float x,y;
  scanf("%d %d", &n, &m);
  scanf("\n%f %f", &x, &y);
   printf("%d %d\n%.1f %.1f",n+m,n-m,x+y,x-y);
    return 0;
}
