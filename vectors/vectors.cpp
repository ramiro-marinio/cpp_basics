#include <iostream>
#include <string>

using namespace std;
int main()
{
    string numbers[3] = {"one", "two", "three"};
    for (int i = 0; i < numbers->length(); i++)
    {
        cout << numbers[i] + " stone." << "\n";
    }
}