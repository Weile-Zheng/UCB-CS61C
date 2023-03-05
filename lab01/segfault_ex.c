#include <stdio.h>
int main() {
    int a[20];
    for (int i = 0; ; i++) {
        printf("%d", i);
        a[i] = i;
    }
}