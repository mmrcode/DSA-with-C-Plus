#include <iostream>
#include <vector>

using namespace std;

// Function to add two polynomials represented as 2D vectors
// Structure of 2D vector: poly[i][0] = coefficient, poly[i][1] = exponent
vector<vector<int>> addPolynomials(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    vector<vector<int>> C;
    int i = 0, j = 0;
    int n1 = A.size();
    int n2 = B.size();

    // Traverse both polynomials simultaneously
    while (i < n1 && j < n2) {
        if (A[i][1] == B[j][1]) {
            // Exponents are equal: add coefficients
            int sumCoeff = A[i][0] + B[j][0];
            if (sumCoeff != 0) {
                C.push_back({sumCoeff, A[i][1]});
            }
            i++;
            j++;
        } 
        else if (A[i][1] > B[j][1]) {
            // Term in A has a higher exponent
            C.push_back({A[i][0], A[i][1]});
            i++;
        } 
        else {
            // Term in B has a higher exponent
            C.push_back({B[j][0], B[j][1]});
            j++;
        }
    }

    // Append remaining terms of Polynomial A
    while (i < n1) {
        C.push_back({A[i][0], A[i][1]});
        i++;
    }

    // Append remaining terms of Polynomial B
    while (j < n2) {
        C.push_back({B[j][0], B[j][1]});
        j++;
    }

    return C;
}

// Function to print a polynomial from a 2D vector
void printPolynomial(const vector<vector<int>>& poly) {
    if (poly.empty()) {
        cout << "0" << endl;
        return;
    }

    for (size_t i = 0; i < poly.size(); i++) {
        int coeff = poly[i][0];
        int exp = poly[i][1];

        if (i > 0 && coeff > 0) cout << " + ";
        if (coeff < 0) cout << " - ";
        
        int absCoeff = abs(coeff);

        if (exp == 0) {
            cout << absCoeff;
        } else if (exp == 1) {
            if (absCoeff == 1) cout << "x";
            else cout << absCoeff << "x";
        } else {
            if (absCoeff == 1) cout << "x^" << exp;
            else cout << absCoeff << "x^" << exp;
        }
    }
    cout << endl;
}

int main() {
    int t1, t2;

    cout << "Enter the number of terms in first polynomial: ";
    cin >> t1;
    vector<vector<int>> A(t1, vector<int>(2));
    cout << "Enter terms for Polynomial A in descending order of exponents (Coefficient Exponent):\n";
    for (int i = 0; i < t1; i++) {
        cin >> A[i][0] >> A[i][1];
    }

    cout << "\nEnter the number of terms in second polynomial: ";
    cin >> t2;
    vector<vector<int>> B(t2, vector<int>(2));
    cout << "Enter terms for Polynomial B in descending order of exponents (Coefficient Exponent):\n";
    for (int j = 0; j < t2; j++) {
        cin >> B[j][0] >> B[j][1];
    }

    vector<vector<int>> C = addPolynomials(A, B);

    cout << "\nPolynomial A: ";
    printPolynomial(A);

    cout << "Polynomial B: ";
    printPolynomial(B);

    cout << "Sum Polynomial C: ";
    printPolynomial(C);

    return 0;
}