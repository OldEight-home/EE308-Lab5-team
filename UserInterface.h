#pragma once

struct UserInput {
	int grade;
	int questionNum;
};
class UserInterface {
	public:
		static void getUserInput(UserInput* input);
};
