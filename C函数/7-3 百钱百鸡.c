#include <stdio.h>

int main() {
    int x, y, n = 0;
    while (scanf("%d", &n) != EOF) {
        for (x = 0; x <= n; x++) {
            for (y = 0; y <= n; y++) {
                if (x * 15 + y * 9 + (n - x - y) == 3 * n && (n - x - y) % 3 == 0) {
                    printf("%d %d %d\n", x, y, (n - x - y));
                }
            }
        }
    }

    return 0;
}