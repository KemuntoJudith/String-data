// String data
//Class Exercise
//26th October

#include <iostream>
#include <string>

using namespace std; 

int main()
{
    //Declare and initialize the variable

    string fullName; 

    //Asks the user to input their full name
    cout << "Please enter your full name: ";

    getline(cin, fullName);

    //output the user's full name
    cout<<"Your full name is: " << fullName << endl;
    

    //cin >> fullName;
    //cin will only capture the first name
    //getline will capture the full name

    return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
