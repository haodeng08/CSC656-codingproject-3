//Haolong Deng
// Apr 29, 2025
const char* dgemv_desc = "Basic implementation of matrix-vector multiply.";

/*
 * This routine performs a dgemv operation
 * Y :=  A * X + Y
 * where A is n-by-n matrix stored in row-major format, and X and Y are n by 1 vectors.
 * On exit, A and X maintain their input values.
 */
void my_dgemv(int n, double* A, double* x, double* y) {
   // insert your code here: implementation of basic matrix multiply
   // For each row in matrix A
    for (int i = 0; i < n; i++) {
        // For each column in matrix A
        double row_sum = 0.0;
        for (int j = 0; j < n; j++) {
            // Element (i,j) is at A[i*n + j] since A is in row-major format
            row_sum += A[i * n + j] * x[j]; //A * X
        }
        // Add result to existing y value 
        y[i] += row_sum; // Y := A * X + Y
    }
}
