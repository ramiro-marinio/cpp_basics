#include <iostream>
#include <string>

using namespace std;

class Officer {
public:
    string name;
    string rank;
    int age;

    Officer(string name, string rank, int age)
        : name(name), rank(rank), age(age) {}

    virtual string toString() const {
        return "Officer: " + name + ", Rank: " + rank + ", Age: " + to_string(age);
    }

    int getAge() const {
        return age;
    }

    virtual ~Officer() = default; // always nice for base class destructor to be virtual
};

class Soldier : public Officer {
public:
    string division;
    string weapon;

    Soldier(string name, string rank, int age, string division, string weapon)
        : Officer(name, rank, age), division(division), weapon(weapon) {}

    string toString() const override {
        return "Soldier: " + name + ", Rank: " + rank + ", Age: " + to_string(age) +
               ", Division: " + division + ", Weapon: " + weapon;
    }
};

class Police : public Officer {
public:
    string state;
    string car_plate;

    Police(string name, string rank, int age, string state, string car_plate)
        : Officer(name, rank, age), state(state), car_plate(car_plate) {}

    string toString() const override {
        return "Police Officer: " + name + ", Rank: " + rank + ", Age: " + to_string(age) +
               ", State: " + state + ", Car Plate: " + car_plate;
    }
};

// Example usage
int main() {
    Soldier s("John Doe", "Sergeant", 28, "Infantry", "Rifle");
    Police p("Jane Smith", "Detective", 35, "New York", "NY1234");

    cout << s.toString() << endl;
    cout << p.toString() << endl;

    return 0;
}

