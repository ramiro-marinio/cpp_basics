#include <iostream>
#include <string>

using namespace std;
int main()
{
    string pito[3] = {"one", "two", "three"};
    for (int i = 0; i < pito->length(); i++)
    {
        cout << pito[i] + " stone." << "\n";
    }
}