#include <iostream>
using namespace std;
//fuction to reverse the string
void reverse1(string* p)
{
    int n = p->size();
    for (int i = 0; i < n / 2; i++) {
        char temp = (*p)[i];
        (*p)[i] = (*p)[n - 1 - i];
        (*p)[n - 1 - i] = temp;
    }
}

int main() {
    //  allocate memory for a string dynamically
    string* str = new string;

    //  input from user
    cout << "Enter a string: ";
    cin >> *str;

    //  reverse the string by calling fuction
    reverse1(str);
    
    //  output result
    cout << "Reversed string: " << *str << endl;

    //  free memory
    delete str;

    return 0;
}