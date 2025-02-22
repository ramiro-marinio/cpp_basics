#include <iostream>
#include <string>

using namespace std;

string capitalizeString(string input)
{
    input[0] = toupper(input[0]);
    return input;
}

int main()
{
	cout << capitalizeString("this should be capitalized.") << "\n";
}
