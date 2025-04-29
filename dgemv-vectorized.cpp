const char* dgemv_desc = "Vectorized implementation of matrix-vector multiply.";

/*
 * This routine performs a dgemv operation
 * Y :=  A * X + Y
 * where A is n-by-n matrix stored in row-major format, and X and Y are n by 1 vectors.
 * On exit, A and X maintain their input values.
 */
void my_dgemv(int n, double* A, double* x, double* y) {
   // insert your code here: implementation of vectorized vector-matrix multiply
   // For each row in matrix A
   for (int i = 0; i < n; i++) {
      // Calculate row offset once per row
      int row_offset = i * n;
      double row_sum = 0.0;
      // For each column in matrix A
      for (int j = 0; j < n; j++) {
         // Use pre-calculated row offset
         row_sum += A[row_offset + j] * x[j];
      }        
      // Add result to existing y value
      y[i] += row_sum;
    }
}
