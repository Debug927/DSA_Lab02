#include <iostream>
using namespace std;

void analyze_pointer(int* ptr) {
    cout << "Memory location: " << ptr << endl;    // prints address
    cout << "Value: " << *ptr << endl;             // prints value at that address
}
int main() {
    // Stack allocation

    int iValue = 42;  // sample value
    analyze_pointer(&iValue);

    // Heap allocation
    int* heapValue = new int;  // allocate on heap

    *heapValue = 80;           // assign value
    analyze_pointer(heapValue);

    delete heapValue;         // free heap memory to avoid leak
    return 0;
}