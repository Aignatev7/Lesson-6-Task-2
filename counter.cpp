#include <iostream>
#include "counter.h"

class Counter
{
private:
	unsigned int initial_counter;

public:

	Counter(unsigned int initial_counter)								//это конструктор с параметром
	{
		this->initial_counter = initial_counter;
	}

	Counter()															//это конструктор без параметров
	{
		this->initial_counter = 1;
	}

	unsigned get_initial_counter()
	{
		return initial_counter;
	}

	void plus()
	{
		this->initial_counter++;
	}

	void minus()

	{
		this->initial_counter--;
	}
};


