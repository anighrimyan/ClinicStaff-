/**
 * @file doctors.cpp
 * this file defines some definitions of
 * the class Doctors
 */

#include <iostream>
#include "person.h"
#include "doctors.h"

doctors::Doctors::Doctors() {std::cout << "Doctors" << std::endl;}
doctors::Doctors::Doctors(const std::string& specialty) {
	set_specialty();
}

doctors::Doctors::~Doctors() { ptr_patient = nullptr; }

void doctors::Doctors::set_specialty() {
	std::cout << "specialty: ";
	std::cin >> m_specialty;
}

const std::string& doctors::Doctors::get_specialty() const {
	return m_specialty;
}

void doctors::Doctors::show() {
	std::cout << "name: " << get_name() << std::endl;
	std::cout << "email: " << get_email() << std::endl;
	std::cout << "address: " << get_address() << std::endl;
	std::cout << "phone_number: " << get_phone_number() << std::endl;
	std::cout << "gender: " << get_gender() << std::endl;
	std::cout << "specialty: " << get_specialty() << std::endl;
	std::cout << "position: " << get_position() << std::endl;
	std::cout << "salary: " << get_salary() << std::endl;
	std::cout << "client_id: " << person::Person::inc_client_id() << std::endl;
}
