#include "operations.h"
#include <iostream>
#include <string>

void operations(Counter& count)
{
	char op;
	do
	{
		std::cout << "������� �������('+', '-', '=' ��� 'x'): ";
		std::cin >> op;

		if (op == '+')
		{
			count.plus();
		}
		if (op == '-')
		{
			count.minus();
		}
		if (op == '=')
		{
			std::cout << count.get_initial_counter() << std::endl;
			continue;
		}
		if (op == 'x')
		{
			std::cout << "�� ��������!" << std::endl;
			/*break;*/
		}
	} while (op != 'x');
}