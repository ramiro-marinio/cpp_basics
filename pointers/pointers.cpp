#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "Hello! This is a value.";
    string *pointer = &s1;
    cout << pointer << "\n";
    cout << &pointer << "\n"; // Prints the same. & for reference, and * for DE-reference (which gives us the value stored in that address)
    cout << &pointer << "\n";
    return 0;
}