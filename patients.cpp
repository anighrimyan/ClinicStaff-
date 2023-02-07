/**
 * @file patients.cpp
 * this file defines some definitions of
 * the class Patients
 */

#include <iostream>
#include "person.h"
#include "patients.h"

patients::Patients::Patients() { std::cout << "Patients" << std::endl; }

patients::Patients::Patients(const std::string& health_rec_num, const std::string& data_of_birth, const std::string& diagnosis) {
	set_health_rec_num();
	set_data_of_birth();
	set_diagnosis();
}

void patients::Patients::set_health_rec_num() {
	std::string health_rec_num{};
	std::cout << "health_rec_num: ";
	std::cin >> m_health_rec_num;
}

const std::string& patients::Patients::get_health_rec_num() const {
	return m_health_rec_num;
}

void patients::Patients::set_data_of_birth() {
	std::cout << "Please, enter the data of birth by this format: day/month/year " << std::endl;
	std::cout << "data_of_birth: ";
	std::cin >> m_data_of_birth;
}

const std::string& patients::Patients::get_data_of_birth() const {
	return m_data_of_birth;
}

void patients::Patients::set_diagnosis() {
	std::cout << "diagnosis: ";
	std::cin >> m_diagnosis;
}

const std::string& patients::Patients::get_diagnosis() const {
	return m_diagnosis;
}

void patients::Patients::show() {
	std::cout << "name: " << get_name() << std::endl;
	std::cout << "email: " << get_email() << std::endl;
	std::cout << "address: " << get_address() << std::endl;
	std::cout << "phone_number: " << get_phone_number() << std::endl;
	std::cout << "gender: " << get_gender() << std::endl;
	std::cout << "data_of_birth: " << get_data_of_birth() << std::endl;
	std::cout << "diagnosis: " << get_diagnosis() << std::endl;
	std::cout << "health_rec_num: " << get_health_rec_num() << std::endl;
	std::cout << "client_id: " << person::Person::inc_client_id() << std::endl;
}
