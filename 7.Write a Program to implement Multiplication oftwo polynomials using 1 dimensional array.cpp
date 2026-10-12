#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to multiply two polynomials
vector<int> multiplyPolynomials(const vector<int>& A, const vector<int>& B) {
    int degA = A.size() - 1;
    int degB = B.size() - 1;
    
    // Resultant polynomial will have degree (degA + degB)
    // Size of vector will be (degA + degB + 1) initialized with 0
    vector<int> C(degA + degB + 1, 0);

    // Multiply every term of A with every term of B
    for (int i = 0; i <= degA; i++) {
        for (int j = 0; j <= degB; j++) {
            C[i + j] += A[i] * B[j];
        }
    }

    return C;
}

// Function to print a polynomial
void printPolynomial(const vector<int>& poly) {
    int degree = poly.size() - 1;
    bool isFirst = true;

    for (int i = degree; i >= 0; i--) {
        if (poly[i] != 0) {
            if (!isFirst) {
                if (poly[i] > 0) cout << " + ";
                else cout << " - ";
            } else {
                if (poly[i] < 0) cout << "-";
                isFirst = false;
            }

            int val = abs(poly[i]);
            
            if (i == 0) {
                cout << val;
            } else if (i == 1) {
                if (val == 1) cout << "x";
                else cout << val << "x";
            } else {
                if (val == 1) cout << "x^" << i;
                else cout << val << "x^" << i;
            }
        }
    }
    if (isFirst) cout << "0"; // If all coefficients are zero
    cout << endl;
}

int main() {
    int degA, degB;

    // Input degree and coefficients for Polynomial A
    cout << "Enter the degree of first polynomial: ";
    cin >> degA;
    vector<int> A(degA + 1);
    cout << "Enter coefficients of first polynomial (from x^0 to x^" << degA << "):" << endl;
    for (int i = 0; i <= degA; i++) {
        cin >> A[i];
    }

    // Input degree and coefficients for Polynomial B
    cout << "Enter the degree of second polynomial: ";
    cin >> degB;
    vector<int> B(degB + 1);
    cout << "Enter coefficients of second polynomial (from x^0 to x^" << degB << "):" << endl;
    for (int j = 0; j <= degB; j++) {
        cin >> B[j];
    }

    // Multiply polynomials
    vector<int> C = multiplyPolynomials(A, B);

    // Display result
    cout << "\nFirst Polynomial A(x): ";
    printPolynomial(A);

    cout << "Second Polynomial B(x): ";
    printPolynomial(B);

    cout << "Product Polynomial C(x): ";
    printPolynomial(C);

    return 0;
}