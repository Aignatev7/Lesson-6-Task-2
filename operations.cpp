#include "operations.h"

void operations(Counter& count)
{
	char op;
	do
	{
		std::cout << "Введите команду('+', '-', '=' или 'x'): ";
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
			std::cout << "До свидания!" << std::endl;
			break;
		}
	} while (op != 'x');
}