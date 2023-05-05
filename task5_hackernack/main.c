#include <stdio.h>

void update(int *a,int *b) {
   int temp =*b;
    if (*a>*b ) temp=*a-*b;
    else     temp=*b-*a;
    *a=*a+*b;
   *b=temp;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
