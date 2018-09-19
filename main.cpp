#include <iostream>
#include <string>


/* 
multi
line
comment 
*/


using namespace std; // don't use in future projects


// class must be above "main"
class TestClass
{
public:
	void PrintFunc()
	{
		cout << "This Is A Class" << endl << endl;
	}
};


// tells the computer what functions to expect in this application, with the prefix (void, string, bool, etc.) telling the computer what data type is expected to be returned from the function
int SimpleAdd();
int AddEquals();
int IncrementOp();
int SimpleIf();
int SimplElse();
int WhileLoop();
int LogicOp();
int SimpleForLoop();
int StockMarketLoop();
int DoWhileLoop();
int SwitchEx();
int TwoAndOp();
int IntegersExample();



// runs code in sequence
int main()
{
	//// functions begin ////
	SimpleAdd();
	AddEquals();
	IncrementOp();
	SimpleIf();
	SimplElse();
	WhileLoop();
	LogicOp();
	SimpleForLoop();
	StockMarketLoop();
	DoWhileLoop();
	SwitchEx();
	TwoAndOp();
	IntegersExample();
	/////////////////////////

	// Class' hold functions which hold code.
	//TestClass TestObject;
	//TestObject.PrintFunc();

	system("pause"); // stops run window from clossing down until user says so
	return 0;
}


// allows two user inputs to be added together and then returns the result
int SimpleAdd()
{
	cout << "Welcome To SIMPLE ADD!" << endl << endl;
	float FirstNumber;
	cout << "Enter the First Number: ";
	cin >> FirstNumber;
	cout << endl;
	float SecondNumber;
	cout << "Enter the Second Number: ";
	cin >> SecondNumber;
	cout << endl;
	cout << FirstNumber << " + " << SecondNumber << " = " << FirstNumber + SecondNumber << endl << endl;

	return 0;
}


// adds user input with 4 using "+=" then places the output in the variable
int AddEquals()
{
	int InpAddEquals;
	cout << "Enter a number to add to 4: ";
	cin >> InpAddEquals;
	cout << endl;
	InpAddEquals += 4; // same can be done with any other operators
	cout << "The Answer is: " << InpAddEquals << endl << endl;

	return 0;
}


// adds on 1 to a value or variable
int IncrementOp()
{
	int InpPP;
	cout << "Welcome to Add 1 To Any Number!" << endl << endl;
	cout << "Enter a Number That You Would Like To See 1 Added To: ";
	cin >> InpPP;
	cout << endl;
	cout << InpPP << " + 1  = ";
	cout << ++InpPP << endl << endl; // "++x" increments x's value before using it, "x++" uses x's value then increments it same can be done with "--x" & "x--" to decrement a value by 1

	return 0;
}


// User has to guess what the number is. Comp tells if they should go up or down
int SimpleIf()
{
	int UserInp;
	int SetValue = 7;
	cout << "Enter a number between 1 and 10: ";
	cin >> UserInp;
	if (UserInp > SetValue)
	{
		cout << endl;
		cout << "Go Lower" << endl << endl;
		SimpleIf();
	}
	if (UserInp < SetValue)
	{
		cout << endl;
		cout << "Go Higher" << endl << endl;
		SimpleIf();
	}
	if (UserInp == SetValue)
	{
		cout << endl;
		cout << "Correct!" << endl << endl;
	}

	return 0;
}


// displays "Yesn't" when Num is found to be smaller than NumTwo
int SimplElse()
{
	int Num = 4;
	int NumTwo = 6;
	if (Num > NumTwo)
	{
		cout << "No";
	}
	else
	{
		cout << "Yesn't";
	}

	return 0;
}


// loop runs 6 times displaying 1 to 6
int WhileLoop()
{
	int Num = 1;
	while (Num < 6)
	{
		cout << "Number: " << Num << endl;
		Num++;
	}

	return 0;
}


// checks age and money to see if the person enetering the values may enter or not (using && logic operator)
int LogicOp()
{
	int age;
	int money;
	cout << "Enter age: ";
	cin >> age;
	cout << endl << "Enter Amount of Money You Have On You: ";
	cin >> money;
	cout << endl;

	if (age >= 18 && money >= 50) // && 
	{
		cout << "You Can Enter." << endl << endl;
	}
	else
	{
		cout << "Access Denied." << endl << endl;
	}

	return 0;
}


// returns numbers in increments of 5 from starting value 0 until value reaches 50
int SimpleForLoop()
{
	for (int a = 0; a <= 50; a += 5) // (loop starting value; loop ending value; increment)
		cout << a << endl << endl;

	return 0;
}


// interest rate calculator to display for loop
int StockMarketLoop()
{
	float a = 0;
	float principle = 10000;
	float rate = .03; // .01 = 1%, .02 = 2%, etc...
	float day;

	for (day = 1; day <= 30; day++)
	{
		a = principle * pow(1 + rate, day);
		cout << a << endl << endl;
	}

	return 0;
}


// Do while loop, unlike a while loop, allows for code to be executed once before the check.
int DoWhileLoop()
{
	int a;

	cout << "'Do While Loop' Example." << endl << endl << "Enter a number. The computer will count up to 10 from the number you input. Any Input bigger than 9 will return that input only once: ";
	cin >> a;
	cout << endl << "You entered: ";

	do
	{
		cout << a;
		a++;
		cout << endl << endl;
	} while (a <= 10);

	return 0;
}


// switch statememnt. Easier than writing IF statements over and over
int SwitchEx()
{
	int age;
	cout << "What Can You Do at Your Age?" << endl << endl;
	cout << "How Old are You? ";
	cin >> age;

	switch (age)
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
int TwoAndOp()
{
	int age;
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
int IntegersExample()
{
	signed SignA = 1;
	signed int SignB = -1;
	unsigned int SignC = 1;

	cout << endl << "\"signed\" allows a variable to hold positive, i.e. " << SignA << ", and " << endl << "negative, i.e. " << SignB << ", numbers. \"int\" is signed by default." << endl << endl;
	cout << "\"unsigned\" only allows for positive, i.e. " << SignC << ", values. Negative numbers won't work" << endl << endl;

	return 0;
}
