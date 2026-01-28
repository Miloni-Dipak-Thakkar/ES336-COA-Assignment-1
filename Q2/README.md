# Question 2 – Python Matrix Multiplication

## Problem Statement
Similarly write your own Python program using nested loops for matrix multiplication of same size N x N. Use timeit module to compute the execution time of the multiplication. Execute the python code with ‘time’’ command.
```c
for i in range(N):
for j in range(N):
for k in range(N):
C[i][j] += A[i][k] * B[k][j]
```

## Approach
- Used pure Python with triple nested loops
- Matrices implemented as lists of lists
- Execution time measured using timeit.timeit()
- Same algorithm as C version for fair comparison

## Execution
```bash
python matmul.py
```

## Observations

-Python implementation is significantly slower than C.
-High overhead due to interpretation and dynamic typing.
-For large N, execution time increases rapidly.
