#include <iostream>

const int n = 20;

void OddNumbers(int arg_1, bool arg_2)
{
	if (arg_2)
	{
		for (int i = 1; i < ::n; ++i) // вывод нечетных
		{
				if (i % 2)
				std::cout << i << "\n";

		}
	}
		
	else
	{
		for (int i = 2; i < ::n; i += 2) // вывод четных
		{

			std::cout << i << "\n";

		}
	}
}


int main()
{
	
	OddNumbers(n, true);
	std::cout << "\n";
	OddNumbers(n, false);
	
}


		
	
	 
