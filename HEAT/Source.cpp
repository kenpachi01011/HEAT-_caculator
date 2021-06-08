#include <iostream>

class Heat {
public:
	double num;
	void Kelvin() {
		std::cout << "Enter the value: ";
		std::cin >> num;
		std::cout << num + 273.15 << "K\n\a";
	}
	void fahrenheit() {
		std::cout << "Enter the value: ";
		std::cin >> num;
		std::cout << (num * 1.8) + 32 << "F\n\a";
	}
	void CelsiusF() {
		std::cout << "Enter the value: ";
		std::cin >> num;
		std::cout << (num - 32) / 1.8 << "C\n\a";
	}
	void CelsiusK() {
		std::cout << "Enter the value: ";
		std::cin >> num;
		std::cout << num - 273.15 << "C\n\a";
	}
};
void options() {
	std::cout << "\t>HEAT Measurement<\n";
	std::cout << "Press 1 to caculate Celsius to Kelvin\n";
	std::cout << "Press 2 to caculate Celsius to fahrenheit\n";
	std::cout << "Press 3 to caculate fahrenheit to Celsius\n";
	std::cout << "Press 4 to caculate Kelvin to Celsius\n";
	std::cout << "Press 0 to EXIT\n";
}
int main()
{
	system("color 4");
	Heat HEAT;
	int opt;
	do {
		options();
		std::cin >> opt;
		switch (opt) {
		case 1:
			HEAT.Kelvin();
			break;
		case 2:
			HEAT.fahrenheit();
			break;
		case 3:
			HEAT.CelsiusF();
			break;
		case 4:
			HEAT.CelsiusK();
			break;
		case 0:
			std::cout << "GoodBye ^_^\a";
			break;
		default:
			std::cout << "invalid selection, please try again ^_^\n\a";
			break;
		}
	} while (opt != 0);

	return 0;
}