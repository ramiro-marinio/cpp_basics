include <iostream>
#include <string>
using namespace std;

struct worker {
	unsigned short int age;
	string name;
};

int main()
{
	struct worker esclavo;
	esclavo.name = "Juam peres";
	esclavo.age = 16;
        cout << &esclavo << "\n";	
	return 0;
}
