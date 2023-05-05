#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int and , or ,xor ,max_and=0 ,max_or ,max_xor ;


void calculate_the_maximum(int n, int k) {
for(int i=1;i<n;i++){
    for(int j=i+1;j<=n;j++){
        and = i&j ;
      //  max_and =and ;
        if(and> max_and && and <k){
            max_and =and ;
        }
        or= i|j ;
        if(or> max_or && or <k){
            max_or =or ;
        }
         xor= i^j ;
        if(xor> max_xor && xor <k){
            max_xor =xor ;
        }
    }

}
     printf("%d\n",max_and);
     printf("%d\n",max_or);
     printf("%d\n",max_xor);
}
int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
