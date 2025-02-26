#include <iostream>
using namespace std;

int main()
{
	int testnumber = 0;
	int* testnumberPointer = &testnumber;
	int *testnumberPointerB = testnumberPointer;
	cout << testnumberPointer << " " << testnumberPointerB << "\n";
	return 0;
}
