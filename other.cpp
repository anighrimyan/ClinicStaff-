/**
 * @file other.cpp
 * this file defines some definitions of
 * the class Other
 */

#include <iostream>
#include "other.h"
other::Other::Other() { std::cout << "Other" << std::endl;}
other::Other::Other(const std::string& position, double salary) {
	set_position();
	set_salary();
}

void other::Other::Other::set_position() {
	bool is_valid = true;
	std::string position{};
	std::cout << "position: ";
	std::cin >> m_position;
	std::cout << std::endl;
	do {
		for (int i = 0; (i < position.length() && is_valid == true); ++i) {
			if (!((position[i] >= 'a' && position[i] <= 'z') || (position[i] >= 'A' && position[i] <= 'Z') || position[i] == ' ')) {
				is_valid == false;
				std::cout << "Try again." << std::endl;
			}
		}
	} while (!is_valid);
	m_position = position;
}

const std::string& other::Other::get_position() const {
	return m_position;
}

void other::Other::set_salary() {
	bool is_valid = true;
	double salary{};
	std::cout << "salary: ";
	std::cin >> salary;
	std::cout << std::endl;
	do {
		if (salary >= 0) {
			m_salary = salary;
		}
		else {
			is_valid == false;
			std::cout << "Try again." << std::endl;
		}
	} while (!is_valid);

}

const double other::Other::get_salary() const {
	return m_salary;
}