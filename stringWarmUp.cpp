    // stringWarmUp.cpp
    // created by Chijenda Vang on 8/25/2025

    // references
    // https://www.w3schools.com/cpp/cpp_strings.asp

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "\n\n Welcome to my String Warmup Program \n\n";
    cout << "\n Created in class on Aug 25, 2025\n";

    // Let's do some string stuff
    // Create a string object named myStrObject
    string myStrObject = "abcdefghi";
    // Output my string object
    cout << "\n The value of my string object is: "<< myStrObject << endl;

    // use a handy dandy method from the string library to find its length
    cout << "The length of myStrObject is: " << myStrObject.length() << endl;

    // Create a variable that hold the length of our string
    int lengthOFmyStrObject = 0;

    lengthOFmyStrObject = myStrObject.length();
    cout << "\n The length of myStrObject is: " << lengthOFmyStrObject << endl;


    return 0;
}