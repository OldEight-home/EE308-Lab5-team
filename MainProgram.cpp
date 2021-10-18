#include <iostream>
#include "UserInterface.h"

using namespace std;
double score=100;
void runProgram(const UserInput& input);

int main() {
	UserInput userInput;
	UserInterface::getUserInput(&userInput);
	runProgram(userInput);
}
void runProgram(const UserInput& input) {
	double everyScore = score / input.questionNum;
	double totalScore = 0;
	switch (input.grade) {
		case 1:
		case 2:
			for (int i = 0; i < input.questionNum; i++) {
				//正确
				if (1) {
					totalScore += everyScore;
				}
			}
			break;
		case 3:
		case 4:
			//正确
			if (1) {
				totalScore += everyScore;
			}
			break;
		case 5:
		case 6:
			//正确
			if (1) {
				totalScore += everyScore;
			}
			break;
	}
	//全答对
	if (totalScore == score) {
		cout << "end! All right, that's great! Your score is 100" << endl;
	}
	else {
		cout << "end! Wrong question, your score is " << totalScore << endl;
	}
}


