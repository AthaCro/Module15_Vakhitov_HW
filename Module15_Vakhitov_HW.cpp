#include <iostream>

const int n = 20;

void OddNumbers()
{

	for (int i = 0; i < ::n; ++i) // ����� ��������
	{
			if (i % 2)
			std::cout << i << "\n";
	}
}

void EvenNumbers()
{
	for (int i = 0; i < ::n; i += 2) // ����� ������
	{

		std::cout << i << "\n";

	}
}

int main()
{
	OddNumbers();
	std::cout << "\n";
	EvenNumbers();
}


		
	
	 
