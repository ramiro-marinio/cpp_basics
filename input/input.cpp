#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
        << means "PUT TO THAT THING" (that thing is the stream, and we're putting a value to it, which will appear in the console)
        >> means "GET FROM THAT THING" (we are getting a value from the stream then doing something w it)
    */
    cout << "Please, insert your name: ";
    string answer;
    cin >> answer;
    cout << ((answer.length() <= 1) ? "Your name is " + answer : "You have not provided a valid name.");
    cout << "\n";
    return 0;
}