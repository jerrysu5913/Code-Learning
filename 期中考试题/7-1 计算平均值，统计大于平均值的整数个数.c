#include "stdio.h"
#include "stdlib.h"

int main(){
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", a + i);
        sum += a[i];
    }
    double avg = (double)sum / n;
    printf("%.2lf\n", avg);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > avg) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    free(a);
    return 0;
}