#include <stdio.h>
int maxRight(int a, int b){
    if(a>b) return a;
    else    return b;
}
int maxleft(int c, int d){
    if(c>d) return c;
    else    return d;
}
int max_of_four(int a, int b, int c, int d) {
 int Right= maxRight(a, b);
 int left= maxleft( c, d);
 if( Right>left) return Right;
    else    return left;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
printf("%d",ans);

    return 0;
}
