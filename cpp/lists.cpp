struct list_element {
    list_element(int n=0, list_element* ptr = 0):
        d(n), next(ptr) {}
    int d;
    list_element* next;
};

// equivalent
class list_element {
    public:
        list_element(int n = 0, list_element* ptr = 0):
            d(n), next(ptr) {}
        int d;
        list_element* next;
};

// 0 is used as nullptr in c++11. 
// list_element* ptr=nullptr;

class list {
    public:
        list(): head(0), cursor(0) {}
        void prepend(int n);    // insert at front value n
        int get_element() {return cursor->d;}
        void advance() {cursor=curson->next;}
        void print();   // cout << "###" << endln;
    private:
        list_element* head;
        list_element* cursor;
};

int main()
{
    list a, b;
    a.prepend(9); a.prepend(8);
    cout << " list a " << endl;
    a.print();
    for (int i = 0; i < 40; ++1)
        b.prepend(i*i);
    cout << " list b " << endl;
    b.print();
}

// Copy constructor
list::list(const list& lst) {
    if (lst.head == 0) {
        head = 0; cursor = 0;  // nullptr in c++11
    }
    else {  // ...setup
        cursor = lst.head;
        list_element* h = new list_element();
        list_element* previous;
        head = h;
        h->d = lst.head->d;
        previous = h;
    }
    for (cursor = lst.head; cursor != 0)  {   // nullptr in c++11
        h = new list_element();
        h->d = cursor->d;
        previous->next = h;
        cursor = cursor->next;
        previous = h;   // ... chain and create    // deep copy
    }
    cursor = head;
}