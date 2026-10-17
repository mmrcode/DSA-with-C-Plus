#include <iostream>

using namespace std;

int main()

{ int matrix1[3][3]; int matrix2[3][3];

int sparse1[10][3];

int sparse2[10][3];

int result[10][3];

int k10; int k2= 0;

int k3 = 0;

// Input Matrix 1

cout << "Enter first 3 x 3 matrix:" << endl;

f8+

Search

for (int i = 0; i < 3; i++)

{

for (int j = 0; j < 3; j++)

{

cin >> matrix1[i][j];

}

}

// Input Matrix 2

cout << "Enter second 3 x 3 matrix:" << endl;

for (int i = 0; i < 3; i++)

{

for (int j = 0; j < 3; j++)

{

cin >> matrix2[i][j];

}

}



// Convert Matrix 1 into Sparse Matrix

for (int i = 0; i < 3; i++)

{

for (int j = 0; j < 3; j++)

{

if (matrix1[i][j] != 0)

sparse1 [k1][0] = 1;

// Row

sparse1 [k1][1] = j;

sparse1[k1][2] = matrix1[i][j]; // Value

k1++;

// Column

LABELS

*Web Technology (1)

{

}

}

// Convert Matrix 2 into Sparse Matrix

for (int i = 0; i < 3; i++)

{

for (int j = 0; j < 3; j++)

{

if (matrix2[i][j] != 0)

{

sparse2[k2][0] = i;

// Row

sparse2[k2][1] = j;

// Column

sparse2[k2][2] = matrix2[i][j]; // Value

k2++;

