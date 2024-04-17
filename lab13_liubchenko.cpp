#include <iostream>
using namespace std;

double compute_Series_Term(int n);
double result;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid input. n should be a positive integer." << endl;
        return 1;
    }
    cout << "The " << n << " term of the series is: " << compute_Series_Term(n) << endl;
    return 0;
}

double compute_Series_Term(int n) {
    if (n == 1)
        return 40.0;
    else
        result = compute_Series_Term(n - 1) / 2.0;
    return result;
}