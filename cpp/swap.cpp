// 2020-1-11
// Compile=> g++ swap.cpp -o swap

#include <iostream>
using namespace std;

// inline is efficient, call by reference
inline void swap(int& i, int& j) {
    int temp = i;
    i = j;
    j = temp;
}

// overload
inline void swap(double& i, double& j) {
    double temp = i;
    i = j;
    j = temp;
}

int main() {
    int m = 5, n = 10;
    double x = 5.3, y = 10.6;
    cout << "inputs: " << m << ", "  << n << endl;
    cout << "double inputs: " << x << ", " << y << endl;
    swap(x, y);
    cout << "double outputs: " << x << ", " << y << endl;
}
