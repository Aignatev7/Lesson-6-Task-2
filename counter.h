#pragma once
#include <iostream>

class Counter {
private:
	unsigned int initial_counter;

public:
	Counter(unsigned int initial_counter);								//это конструктор с параметром
	Counter();
	unsigned get_initial_counter();
	void plus();
	void minus();
};
