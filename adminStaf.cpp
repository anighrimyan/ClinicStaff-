/**
 * @file adminStaf.cpp
 * this file defines some definitions of
 * the class AdminStaf
 */

#include <iostream>
#include "person.h"
#include "adminStaf.h"

adminstaf::AdminStaf::AdminStaf() { std::cout << "AdminStaf" << std::endl;}

void adminstaf::AdminStaf::registration() {
	std::cout << "Register a new employee or a patinet." << std::endl;
}

void adminstaf::AdminStaf::show() {
	std::cout << "name: " << get_name() << std::endl;
	std::cout << "email: " << get_email() << std::endl;
	std::cout << "address: " << get_address() << std::endl;
	std::cout << "phone_number: " << get_phone_number() << std::endl;
	std::cout << "gender: " << get_gender() << std::endl;
	std::cout << "position: " << get_position() << std::endl;
	std::cout << "salary: " << get_salary() << std::endl;
	std::cout << "client_id: " << person::Person::inc_client_id() << std::endl;
}