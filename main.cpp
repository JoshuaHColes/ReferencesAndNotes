#include <iostream>
#include <string>
#include <cmath>

using int32 = int; // allows for representing 32-bit integer

using namespace std; // don't use in future projects


int32 SwitchEx();
int32 TwoAndOp();
int32 IntegersExample();


int32 main()
{
    /////fucntions/////
    SwitchEx();
    TwoAndOp();
    IntegersExample();
    //////////////////

    //system("pause");
    return 0;
}


// switch statememnt. Easier than writing IF statements over and over
int32 SwitchEx()
{
    int32 age;
    cout << "What Can You Do at Your Age?" << endl << endl;
    cout << "How Old are You? ";
    cin >> age;

    switch(age)
    {
    case 16:
        cout << endl << "You Can Drive In The USA" << endl << endl;
        break; // break stops you from going through the rest of the loop when the match is found
    case 18:
        cout << endl << "You Can Buy Alcohol in Most Countries Apart From the USA" << endl << endl;
        break;
    case 21:
        cout << endl << "You Can Buy Alcohol In The USA" << endl << endl;
        break;
    default: // if age doesn't match any of the values, runs the default
        cout << endl << "Nothing has Changed" << endl << endl;

    }

    return 0;
}


// && operator
int32 TwoAndOp()
{
    int32 age;
    cout << "What Can You Do at Your Age?" << endl << endl;
    cout << "How Old are You? ";
    cin >> age;

    if (age < 16)
    {
      cout << endl << "Nothing" << endl << endl;
    }
    if (age >= 16 && age < 18) // && allows for inbetween values to be entered and evaluated
    {
      cout << endl << "Age of Consent & You Can Drive In The USA" << endl << endl;
    }
    if (age >= 18 && age < 21)
    {
      cout << endl << "You Can Buy Alcohol (Not USA) and drive in Most Countries" << endl << endl;
    }
    if (age >= 21)
    {
      cout << endl << "You Can Buy Alcohol in the USA" << endl << endl;
    }

    return 0;
}


// only use "unsigned" to specify when a variable with an integer can never be negative
int32 IntegersExample()
{
    signed SignA = 1;
    signed int SignB = -1;
    unsigned int SignC = 1;

    cout << endl << "\"signed\" allows a variable to hold positive, i.e. " << SignA << ", and " << endl << "negative, i.e. " << SignB << ", numbers" << endl << endl;
    cout << "\"unsigned\" only allows for positive, i.e. " << SignC << ", values. Negative numbers won't work" << endl << endl;

    return 0;
}
