#include <iostream>

// Function to transpose a matrix
void transposeMatrix(int matrix[][3], int rows = 0, int cols=0) {
    int transposedMatrix[cols][rows];  // Resulting transposed matrix

    // Nested loops to perform the transpose
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    // Display the transposed matrix
    std::cout << "Transposed Matrix:" << std::endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            std::cout << transposedMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Example matrix
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    // Get the number of rows and columns
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    // Transpose the matrix
    transposeMatrix(matrix, rows, cols);

    return 0;
}


