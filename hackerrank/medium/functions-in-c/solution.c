#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    if (d > m) m = d;
    return m;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d\n", max_of_four(a, b, c, d));
    return 0;
}
