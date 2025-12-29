#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &m, &n);

    int A[n][m], B[n][m], sum[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {  // ? Fixed loop condition
            scanf("%d", &B[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", sum[i][j]);  // ? Cleaner output
        }
        printf("\n");
    }

    return 0;
}


