'''c
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define N 1024

int main() {
    int i, j, k;
    static int A[N][N], B[N][N], C[N][N];
    struct timeval start, end;
    double time_taken;

    for (i = 0; i<N; i++) {
        for (j = 0; j<N; j++) {
            A[i][j] = 1;
            B[i][j] = 1;
            C[i][j] = 0;
        }
    }

    gettimeofday(&start, NULL);

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            for (k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];

    gettimeofday(&end, NULL);

    time_taken = (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec)/1e6;

    printf("Execution time: %f seconds\n", time_taken);

    return 0;
}

'''
