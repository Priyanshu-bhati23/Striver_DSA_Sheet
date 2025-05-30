#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
typedef vector<vector<long long>> Matrix;

// Function to multiply two 2x2 matrices
Matrix matrixMultiplication(Matrix &A, Matrix &B) {
    Matrix result(2, vector<long long>(2, 0));
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            for (int k = 0; k < 2; ++k)
                result[i][j] = (result[i][j] + A[i][k] * B[k][j]) % MOD;
    return result;
}

// Function to raise matrix to the power exponent
Matrix matrixExponentiation(const Matrix& base, int exponent) {
    // Identity matrix
    Matrix result(2, vector<long long>(2, 0));
    for (int i = 0; i < 2; ++i)
        result[i][i] = 1;

    Matrix B = base;

    while (exponent > 0) {
        if (exponent % 2 == 1)
            result = matrixMultiplication(result, B);
        B = matrixMultiplication(B, B);
        exponent /= 2;
    }

    return result;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n == 0) {
        cout << "Fibonacci(" << n << ") = 0" << endl;
        return 0;
    }

    Matrix T = {{1, 1}, {1, 0}};      // Transformation matrix
    Matrix mat = {{1}, {0}};          // Base case vector: F(1) = 1, F(0) = 0

    Matrix Tn = matrixExponentiation(T, n - 1);
    Matrix result = matrixMultiplication(Tn, mat);

    cout << "Fibonacci(" << n << ") = " << result[0][0] << endl;
    return 0;
}
