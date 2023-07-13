#include "counter.h"

Counter::Counter(unsigned int initial_counter)								//��� ����������� � ����������
{
	this->initial_counter = initial_counter;
}

Counter::Counter()													//��� ����������� ��� ����������
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

