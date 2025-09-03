    // funWithFunctions.cpp
    // Created by Chijenda Vang on 9/3/2025


    #include <iostream>
    #include <string>
    #include <algorithm>
    using namespace std;

    // create three functions



















    // AddTwoInts
    int fun(int num1, int num2) {
        return num1 + num2;

    }

string name (string username) {
        reverse (username.begin(), username.end());
        return username;
    }



// keep main
int main() {

    cout << "\n...Welcome to my cool Fun With Functions program !...\n" << endl;


        // initialize variables for this program.
    int num1;
    int num2;
        string username;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;


        // call's int fun function
    int sum = fun(num1, num2);
    cout << "The sum is: " << sum;

    cout << "\n enter username:";
        cin >> username;

    string number = name(username);

        cout << "The name is: " << number;
    return 0;


}