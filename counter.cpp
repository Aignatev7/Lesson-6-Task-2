#include "counter.h"

Counter::Counter(unsigned int initial_counter)								//это конструктор с параметром
{
	this->initial_counter = initial_counter;
}

Counter::Counter()													//это конструктор без параметров
{
	this->initial_counter = 1;
}

unsigned Counter::get_initial_counter()
{
	return initial_counter;
}

void Counter::plus()
{
	this->initial_counter++;
}

void Counter::minus()
{
	this->initial_counter--;
}

