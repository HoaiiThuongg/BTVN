#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int x =*a,y = *b;
    *a = (x+y);
    int m = x-y;
    if(m<0) m = -m;
    *b = m;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}