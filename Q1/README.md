# Question 1
### Write a C program to multiply square matrices of size N x N where N is at-least 1024. Use either int or float data types. Compute the time needed to execute multiplication. You may use and refer timespec or timeval functions. As a part of compilation generate the intermediate. Observe and highlight the changes in .i and .s files. Execute the binary program with ‘time’’ command.

for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
        for (k = 0; k < N; k++)
            C[i][j] += A[i][k] * B[k][j];
