
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n,i,j;
int sum=0;
    scanf("%d", &n);
  int  *x=(int*)malloc(n*sizeof(n));
  for (i=0;i<n;i++){
     scanf("%d",& x[i]); }
   for (j=0;j<n;j++){
     sum+=x[j];
  }
    printf("%d",sum);
    return 0;
}
