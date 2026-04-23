#include <iostream>
#include <format>
using namespace std;

class CharacterTemplate {

	// Basic Private Fields
private:
		string _characterName;
		

	// Private Arrays and Enums
private:
		enum basicStatsEnums {
			SPEED,
			STAMINA,
			STRENGTH,
			AGILITY,
			SEXINESS,
		};
		int basicStats[static_cast<int>(basicStatsEnums::SEXINESS) + 1] = { 0, 0, 0, 0, 0};
		string basicStatsNames[static_cast<int>(basicStatsEnums::SEXINESS) + 1] = {"Speed", "Stamina", "Strength", "Agility", "Sexiness"};
		

		// Private Methods
		void DefineName() {
			
			cout << "\nWhat is your Character's Name?\n" << "Enter Character's Name:";
			cin >> _characterName;
		}

		void DefineStats() {
			cout << format("\nDefine {} stats!", _characterName) << endl;
			cout << "----------------------------------------------------------" << endl;
			for (int i = 0; i < static_cast<int>(basicStatsEnums::SEXINESS); i++) {

				cout << format("\n{}'s {} value: ", _characterName, basicStatsNames[i]);
				cin >> basicStats[i];
				cout << "\n";

			}

			cout << "Stats Defined!" << endl << "----------------------------------------------------------";
		}


public:
		void StartCharacterCreation() {
			DefineName();
			DefineStats();
		}

};



int main() {
	
	CharacterTemplate characterTemp;

	cout << "\033[" << 32 << "m"; // Changes text color of the console to Green
	characterTemp.StartCharacterCreation();
	return 0;
}



// Initialization of Methods
