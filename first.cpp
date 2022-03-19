// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello world";
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     string firstName, lastName;

//     cout << "Enter Your first name : ";
//     cin >> firstName;

//     cout << "Enter your last name : ";
//     cin >> lastName;

//     cout << "Your fullName is " << firstName + lastName;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

// string fname = "Faraz";
// string lname = "Alam";

// cout << "Your full name is " << fname << " " << lname;

// string fname = "Faraz", lname = "Alam";

// cout << "Your full name is " << fname << " " << lname;

// --------------Addition--------
// int fnumber, lnumber;
// cout << "Enter first number: ";
// cin >> fnumber;

// cout << "Enter second number: ";
// cin >> lnumber;

// int sum = fnumber + lnumber;
// cout << "Sum of the given inputs are: " << sum;
// bool isCodingFun = true;
// bool isFishTasty = false;
// cout << isCodingFun; // Outputs 1 (true)
// cout << isFishTasty;

// }

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    // cout << min(19, 9);
    // cout << "\n";

    // cout << sqrt(4);
    // cout << "\n";

    // cout << round(2.4);
    // cout << "\n";

    // cout << log(2);

    // return 0;

    // int day = 1;
    // switch (day)
    // {
    // case 1:
    //     cout << "Monday";
    //     break;
    // case 2:
    //     cout << "Tuesday";
    //     break;
    // default:
    //     cout << "Holiday";
    //     break;
    // }

    // int i = 0;
    // while (i < 5)
    // {
    //     cout << i << "\n";
    //     i++;
    //     // return 0;
    //     cout << "Hello \n";
    // }

    // int i = 0;
    // do
    // {
    //     i++;
    //     cout << i << ") Faraz \n";
    // } while (i < 1000);

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "Faraz \n";
    // }

    // ----------Array---------

    // string arr[4] = {"faraz", "alam", "ammad", "ali"};
    // cout << arr[1];
    // string car[2];
    // car[0] = "Volvo";
    // car[1] = "Tesla";
    // cout << car[1];

    // cout << sizeof(string); // returns size of string in bytes.
    // cout << sizeof(arr);    // complete size of string.
    // cout << sizeof(arr) / sizeof(string);

    // string food = "Pizza";
    // string meal = food;
    // cout << meal;

    string arr[2][3] = {{"A", "B", "C"}, {"D", "E", "F"}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            {
                cout << arr[i][j] << "\n";
            }
        }
    }
}