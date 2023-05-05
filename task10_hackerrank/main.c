#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int len=(2*n-1);
        for(int j=0;j<len;j++){
  	for(int i=0;i<len;i++){
          int min=i>j?j:i;
          min=min<len-j?min:len-j-1;
          min=min<len-i-1?min:len-i-1;
          printf("%d ", n-min);}
          printf("\n");
      }
    return 0;
}
