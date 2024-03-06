#include <iostream>

int main()
{
	float Value1, Value2, Value3, Average;

	std::cout << "Type three float values separated by <SPACE> then press <ENTER>: ";
	std::cin >> Value1 >> Value2 >> Value3;
	std::cout << "The three values are: \n" << Value1 << "\n"<< Value2 << "\n" << Value3 << "\n";
	Average = (Value1 + Value2 + Value3) / 3;
	std::cout << "The average is: " << Average;
}