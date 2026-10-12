#include <iostream>
#include <vector>

using namespace std;

// Function to transpose a matrix
vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // The transposed matrix will have dimension (cols x rows)
    vector<vector<int>> transpose(cols, vector<int>(rows));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    return transpose;
}

// Function to display a matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;

    cout << "Enter rows and columns of matrix: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    printMatrix(matrix);

    vector<vector<int>> transposed = transposeMatrix(matrix);

    cout << "\nTransposed Matrix:\n";
    printMatrix(transposed);

    return 0;
}