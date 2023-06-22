#include <stdio.h>

int Min(int (*a)[4], int n){
    int min = a[0][n];
    for(int i = 1; i < 4; i++){
        if(a[i][n] < min) min = a[i][n];
    }
    return min;
}

int main(){
    int a[4][4] = {0};
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int k = 0; k < 4; k++){
        printf("%d ", Min(a, k));
    }
}
