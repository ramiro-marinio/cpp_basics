#include <iostream>
#include <string>
using namespace std;

class Officer {
	public:
		string name;
		string rank;
		string age;
};

class Soldier : public Officer {
	public:
		string division;
		string weapon;
};

class Police : public Officer {
	public:
		string state;
		string car_plate;
};

int main()
{
	return 0;
}
