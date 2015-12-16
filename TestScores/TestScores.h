#pragma once
//Jay Rosen
//This is the TestScores class for mod1.cpp.
//This class is used for storing Test Scores, Maximum, Minimum and Average.

#ifndef TestScores_H
#define TestScores_H

class TestScores
{
private:
	int Test1, Test2, Test3, Max, Min;		//Variables Test1, Test2, Test3, Maximum, and Minimum scores are all private
	void setTest(int, int, int);			//To store the Test Scores
	void setMax(int, int, int);				//To determine Maximum
	void setMin(int, int, int);				//To determine Minimum


public:
	TestScores();							//Default constructor
	void getTest(int, int, int);			//To pass user input to private
	double getAverage();					//To calculate average

};
#endif