//Jay Rosen
// This program calculates the Average, Maximum, and Minimum for 3 input Test Scores.
#include "TestScores.h"
#include <iostream>
#include <iomanip>
using namespace std;

//prototype functions
int getInput();
void validate(int& n);



// TestScores Class Implementation Code 

/*************************************
*  TestScores Default Constructor   *
*************************************/
TestScores::TestScores()
{
	//Initialize Tests as 0
	Test1 = Test2 = Test3 = 0;
}


/*************************************
*      TestScores::getTest           *
*	Pass the Test scores to private  *
*************************************/
void TestScores::getTest(int num1, int num2, int num3)
{
	Test1 = num1;
	Test2 = num2;
	Test3 = num3;

	//Pass input TestScores to Private
	setTest(Test1, Test2, Test3);

}



/*************************************
*      TestScores::setTest          *
*   The Test Scores from getTest    *
*	are passed to here in Private.  *
*   The Test Scores are then passed *
*	to setMax and setMin.		    *
*************************************/
void TestScores::setTest(int num1, int num2, int num3)
{
	Test1 = num1;
	Test2 = num2;
	Test3 = num3;

	cout << fixed << showpoint;
	cout << setprecision(1);


	//Display the 3 Test Scores
	cout << "\n\t\t Test 1: " << Test1 << endl;
	cout << "\t\t Test 2: " << Test2 << endl;
	cout << "\t\t Test 3: " << Test3 << endl << endl;


	setMax(Test1, Test2, Test3);
	setMin(Test1, Test2, Test3);
}


/*************************************
*      TestScores::setMax             *
*	Determine which of the three      *
*	Test Score is the highest score.  *
*************************************/
void TestScores::setMax(int t1, int t2, int t3)
{
	Test1 = t1;
	Test2 = t2;
	Test3 = t3;

	int Max = 0;

	//If Test is greater than the other two tesst, than that test is Max

	if (Test1 > Test2 && Test1 > Test3)
		Max = Test1;

	if (Test2 > Test1 && Test2 > Test3)
		Max = Test2;

	if (Test3 > Test1 && Test3 > Test2)
		Max = Test3;

	cout << fixed << showpoint;
	cout << setprecision(1);

	//Display Max

	cout << "\t\t Maximum : " << Max << endl;

}


/*************************************
*      TestScores::setMin			  *
*	Determine which of the three      *
*	Test Score is the lowest score.   *
*************************************/
void TestScores::setMin(int t1, int t2, int t3)
{
	Test1 = t1;
	Test2 = t2;
	Test3 = t3;

	int Min = 0;

	//If Test is lesser than the other two tesst, than that test is Min

	if (Test1 < Test2 && Test1 < Test3)
		Min = Test1;

	if (Test2 < Test1 && Test2 < Test3)
		Min = Test2;

	if (Test3 < Test1 && Test3 < Test2)
		Min = Test3;

	cout << fixed << showpoint;
	cout << setprecision(1);

	//Display Min

	cout << "\t\t Minimum : " << Min << endl;

}




/*************************************
*      TestScores::getAverage           *
*	Calculate the sum total of the Test *
Scores and return Average to Main.  *
*************************************/
double TestScores::getAverage()
{
	//Add the 3 test scores to find sum and divide by 3 to get average

	int sum = Test1 + Test2 + Test3;
	return (sum) / 3.0;
}



/*************************************
*                main               *
*************************************/
int main()
{

	int num1, num2, num3;					//User input for 3 test scores
	TestScores TestGrader;					//TestGrader is an object of the Testscores class

	cout << "\n\n";
	cout << "\t\t Please enter 3 test scores. \n";			//Prompt user for input
	cout << "\t\t Separate the scores with a space. \n";
	cout << "\t\t Press Enter to calculate average. \n\n";

	cout << "\t\t ";

	num1 = getInput();							//Input 3 numbers are passed to getInput()
	num2 = getInput();
	num3 = getInput();

	TestGrader.getTest(num1, num2, num3);		//Input numbers are passed to TestGrader.getTest()


	cout << fixed << showpoint;
	cout << setprecision(1);

	cout << "\t\t Average : " << TestGrader.getAverage() << endl;		//The Average is displayed from TestGrader.getAverage()
	cout << "\n\t\t ";

	system("pause");
	return 0;
}

/*************************************
*				getInput             *
*	Get input from user and send to	 *
*           validate function.		 *
*************************************/
int getInput()
{
	int num;
	cin >> num;

	validate(num);							//Input numbers are passed to validate()

	return num;
}

/*************************************
*				validate              *
*	Determine if input is non-integer *
*	and display error message.        *
*************************************/
void validate(int& n)
{
	while (!cin)						//Check if input is correct
	{
		cin.sync();
		cin.clear();
		cout << "\n\t\t Error: Invalid input, try again: \n\t\t ";
		cin >> n;
	}
}

