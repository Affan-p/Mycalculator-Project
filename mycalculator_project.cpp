// mycalculator_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Addition {
public:
	int fNum;
	int sNum;
	Addition(int firstNum, int secondNum) : fNum(firstNum), sNum(secondNum) {}
	void addp() {
		cout << fNum+sNum;
	}
};

class Subtraction {
public:
	int fNum;
	int sNum;
	Subtraction(int firstNum, int secondNum) : fNum(firstNum), sNum(secondNum) {}
	void subp() {
		cout << fNum - sNum;
	}
};

class Multiplication {
public:
	int fNum;
	int sNum;
	Multiplication(int firstNum, int secondNum) : fNum(firstNum), sNum(secondNum) {}

	void mp() {
		cout << fNum * sNum;
	}
};
class Division {
public:
	int fNum;
	int sNum;
	Division(int firstNum, int secondNum) : fNum(firstNum), sNum(secondNum) {}

	void dp() {
		if (fNum != 0) {
			cout << fNum / sNum;
		}
		else {
			cout << "Error can't divide by 0";
		}
	}
};

class calculator :public Addition,public Subtraction,public Multiplication, public Division{
public:
	int firstNum;
	int secondNum;
	char sign;

	calculator(int firstNum, char sign, int secondNum) :Addition(firstNum, secondNum),Subtraction(firstNum, secondNum) , Multiplication(firstNum, secondNum) , Division(firstNum, secondNum) {}
	
	
};

int main()
{
	cout << "Type a number: ";
	int x;
	cin >> x;
	cout << endl;
	cout << "Type a sign (+,-,/,*, only): ";
	char c;
	cin >> c;
	cout << endl;
	cout << "Type the second number: ";
	int y;
	cin >> y;

	calculator calculation(x, c, y);
	if (c == '+') {
		calculation.addp();
	}
	else if (c == '-') {
		calculation.subp();
	}
	else if (c == '*') {
		calculation.mp();
	}
	else if (c == '/') {
		calculation.dp();
	}else {
			cout << "Invalid operator try again" << endl;
		}
	


	return 0;
	
}


/*
psudocode

addition
subtraction
multiplication
division 

multiple inheritence
to calculator class


*/
