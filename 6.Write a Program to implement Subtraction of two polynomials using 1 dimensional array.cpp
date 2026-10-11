#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int deg1, deg2;

    cout << "Enter the highest degree of the first polynomial: ";
    cin >> deg1;

    int poly1[deg1 + 1] = {0};
    cout << "Enter coefficients for the first polynomial (from power 0 to " << deg1 << "):" << endl;
    for (int i = 0; i <= deg1; i++) {
        cout << "Coefficient of x^" << i << ": ";
        cin >> poly1[i];
    }

    cout << "\nEnter the highest degree of the second polynomial: ";
    cin >> deg2;

    int poly2[deg2 + 1] = {0};
    cout << "Enter coefficients for the second polynomial (from power 0 to " << deg2 << "):" << endl;
    for (int i = 0; i <= deg2; i++) {
        cout << "Coefficient of x^" << i << ": ";
        cin >> poly2[i];
    }

    int maxDeg = max(deg1, deg2);
    int diff[maxDeg + 1] = {0};

    // Subtract corresponding coefficients (poly1 - poly2)
    for (int i = 0; i <= maxDeg; i++) {
        int coeff1 = (i <= deg1) ? poly1[i] : 0;
        int coeff2 = (i <= deg2) ? poly2[i] : 0;
        diff[i] = coeff1 - coeff2;
    }

    // Display the resulting polynomial
    cout << "\nResultant Polynomial after subtraction (Poly1 - Poly2):" << endl;
    bool firstTerm = true;
    for (int i = maxDeg; i >= 0; i--) {
        if (diff[i] != 0) {
            if (!firstTerm) {
                if (diff[i] > 0) {
                    cout << " + ";
                } else {
                    cout << " - ";
                }
            } else if (diff[i] < 0) {
                cout << "-";
            }

            int absCoeff = abs(diff[i]);

            if (i == 0) {
                cout << absCoeff;
            } else if (i == 1) {
                if (absCoeff == 1) cout << "x";
                else cout << absCoeff << "x";
            } else {
                if (absCoeff == 1) cout << "x^" << i;
                else cout << absCoeff << "x^" << i;
            }

            firstTerm = false;
        }
    }

    if (firstTerm) {
        cout << "0";
    }
    cout << endl;

    return 0;
}