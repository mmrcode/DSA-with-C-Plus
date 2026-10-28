#include<iostream>
using namespace std;
int main (){

    int matrix [3] [3];
    int zero = 0;
    int total = 9;

    cout<< "Enter 3 x 3 matrix:"<<endl;

    // Input matrix

     for (inti = 0; i < 3; i + + )
     for (intj = 0; j < 3; j++)
     cin >> matrix[i] [j];
     if (matrix[i] [j] =
    zero++;
     
    // Check sparse matrix
     if (zero > total / 2)
     cout << "Matrix is a Sparse Matrix.";
      else
     cout << "Matrix is not a Sparse Matrix.";
      return 0;



}
