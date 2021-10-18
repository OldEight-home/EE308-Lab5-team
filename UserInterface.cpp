#include <iostream>
#include "UserInterface.h"
using namespace std;

void UserInterface::getUserInput(UserInput* input) {
	cout << "Please enter your grade?" << endl;
	cin >> input->grade;
	cout << "Please enter the number of questions?";
	cin >> input->questionNum;
}


