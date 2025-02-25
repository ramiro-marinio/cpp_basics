#include <iostream>
#include <string>
using namespace std;

class Officer {
	public:
		string name;
		string rank;
		int age;
		Officer(string name, string rank, int age){
                  this->name = name;
                  this->rank = rank;
                  this->age = age;
          	}
          	string toString(){
                  return this->name;
          	}
		int getAge();

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

int Officer::getAge (void) {
	return age;
}

int main()
{
	Officer comisario("Juancito", "Gendarme",14);
	cout << comisario.toString() << "\n";
	cout << comisario.getAge() << "\n";
	return 0;
}
