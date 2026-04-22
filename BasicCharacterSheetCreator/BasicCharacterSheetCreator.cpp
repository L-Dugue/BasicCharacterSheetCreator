#include <iostream>
#include <windows.h>
using namespace std;

// Variables
string characterName;

void DefineCharacter(); // Declaration of Methods

int main() {
	

	cout << "\033[" << 32 << "m"; // Changes text color of the console to Green
	LPCWSTR consoleName = L"Avro's Basic Character Creator Sheet";
	SetConsoleTitle(consoleName);
	cout << "---------------------------------------------------\n";
	DefineCharacter();

	return 0;
}

// Initialization of Methods
void DefineCharacter() {
	cout << "What is your Character's Name?\n" << "Enter Character's Name:";
	cin >> characterName;
	cout << "Character's name is: " << characterName;
}