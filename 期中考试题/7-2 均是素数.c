#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int isPrime(int n) {
    if (n <= 1) return 0;
    int sqr = (int)sqrt(1.0 * n);
    for (int i = 2; i <= sqr; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int m, n, cnt = 0;
    scanf("%d %d", &m, &n);
    int flag = 0;
    for (int p = m; p <= n; p++) {
        if (isPrime(p)) {
            for (int q = p + 1; q <= n; q++) {
                if (isPrime(q)) {
                    for (int r = q + 1; r <= n; r++) {
                        if (isPrime(r)) {
                            if (isPrime(p * q + r) && isPrime(q * r + p) && isPrime(r * p + q)) {
                                cnt++;
                                flag = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}