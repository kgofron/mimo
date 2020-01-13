#include <iostream>
#include <string>
using namespace std;

// template - Generic programming
template <typename T>
T myMax(T x, T y) {
    return (x > y)? x: y;
}


// std::swap(x,y) existst, so do not overload it
template <class T>
inline void mySwap(T& d, T& s) {  // Template function
    T temp = d;
    d = s;
    s = temp;
}

template <class summable>
//summable is the generic type
summable sum(const summable data[], int size, summable s = 0) {
    for(int i = 0; i < size; ++i) 
        s += data[i];
    return s;
}

int main() {
    cout << myMax(3,7) << " is Max" << endl;

    int m = 5, n = 10;
    double x = 5.3, y = 10.6;
    cout << "inputs: " << m << ", "  << n << endl;
    cout << "double inputs: " << x << ", " << y << endl;
    mySwap(x, y);
    cout << "double outputs: " << x << ", " << y << endl;
    string mr="George", ms="Martha";
    cout << "string inputs: " << mr << ", " << ms << endl;
    mySwap(mr,ms);
    cout << "string outputs: " << mr << ", " << ms << endl;
}