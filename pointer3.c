//Swap two numbers using pointers
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *p = &a, *q = &b, temp;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("a = %d, b = %d", a, b);
    return 0;
}

