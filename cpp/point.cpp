// assignment
point(){x = y = 0.0;}

// this pointer assignment
point() {this-> x = 0.0; this->y = 0.0} // this->x is member, 0.0 is argument

// Initialization list, PREFERRED
point():x(0,0),y(0,0){}
point(double x, double y):x(x), y(y){}

private:    // use initialization
const int special;

// Inner block, outer block
int main() {
    int i = 9, j = 3;
    cout << "i is" << i << "j is " << j << endl; // Outer 9,3
    { 
        int i = j + 2;
        cout << "i is" << i << "j is " << j << endl; // Inner 5,3
    }
    cout << "i is" << i << "j is " << j << endl;    // Outer 9,3
}

char* s = new char[size]; // tet off heap
int *p = new int(9); // single int initialzed
delete [] s; // delete an array
delete p; // delte single element

// destructor
~destructor

struct slistelem{ char data; slistelem* next;}
class slist { // singly linked list
    public:
    slist():h(0) // empty list
    ~slist() { release(); } // destructor
    private:
    slistelem* h; // list head
}

void slist::prepend (char* c) {
    slistelem* temp = new slistelem; // allocation fails bad_alloc exception thrown
    temp -> next = h;
    temp -> data = c;
    h = temp; // update h
}

// ~desctructor
slist:~slist() {
    cout << "desctructor called" << endl;
    // just for demostration - debug
    release();  // match through list with deletes
}

// Constructors: Initialize, Convert (value -> point), Allocate, check correctness
