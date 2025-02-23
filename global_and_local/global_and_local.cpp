#include <iostream>
#include <string>
using namespace std;
string v = "This value is declared on the global scope.";
int main () {
	string v = "And this one is in the local scope.";
	/*Both of these variables conflict with each other due to their names.
	 * To fix this, we will use the double-colon (::) operator, which when used,
	 * calls the variable on the global scope. This avoids these types of issues.*/
	cout << "Global variable:" << ::v << "\n";
	cout << "Local variable:" << v << "\n";
	return 0;
}














