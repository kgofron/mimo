// Simple Standard Template Library -> STL vector program
#include <iocstream>
#include <vector>
using namespace std

int main () {
    vector<int> v(100); // allocate space
    ** vector is a template is a random access container - replace arry in C++

    for (int i = 0; i < 100; i++)
        v[i] = i; index throu like an array; C idiom
    for (vector<int>::iterator p = v.begin(); p != v.end(); ++p) { // c++ idiom
        cout << *p << '\t';
        cout << endl;
    }

    for (auto p = v.begin(); ...)   // auto => ifer type
    
}
