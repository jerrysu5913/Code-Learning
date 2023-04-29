#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int a = 1, b = 1, c;
    for (int i = 1; i <= n; i++) {
        printf("%-10d", a);
        if (i % 4 == 0) {
            printf("\n");
        }
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}