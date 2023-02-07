/**
 * @file person.cpp
 * this file defines some definitions of
 * the class Person
 */

#include <iostream>
#include "person.h"


person::Person::Person() { std::cout << "Person" << std::endl; }
person::Person::Person(const std::string& name, const std::string& address, const std::string& phone_number,const std::string& gender, const std::string& email) {
	//this->m_name = name;
	//this->m_email = email;
	//this->m_address = address;
	//this->m_phone_number = phone_number;
	//this->m_gender = gender;
	set_name();
	set_address();
	set_phone_number();
	set_gender();
	set_email();
}

void person::Person::set_name() {
	std::string name{};
	bool is_valid = true;
	do {
		std::cout << "name: ";
		std::cin >> name;
			for (int i = 0; i < name.length(); ++i) {
				if (!((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z') || name[i] == ' ')) {
					is_valid = false;
					std::cout << "Try again." << std::endl;
				}
			}
	} while (!is_valid); 
	m_name = name;
}

 const std::string& person::Person::get_name() const {
	return m_name;
}

void person::Person::set_email() {
	std::cout << "email: ";
	std::cin >> m_email;
}

const std::string& person::Person::get_email() const {
	return m_email;
}

void person::Person::set_address() {
	std::string address{};
	bool is_valid = true;
	do {
		std::cout << "address: ";
		std::cin >> address;
		for (int i = 0; i < address.length(); ++i) {
			if (!((address[i] >= 'a' && address[i] <= 'z') || (address[i] >= 'A' && address[i] <= 'Z') || (address[i] >= '0' && address[i] <= '9') || address[i] == ' ')) {
				is_valid = false;
				std::cout << "Try again." << std::endl;
			}
		}
	} while (!is_valid);
	m_address = address;
}

const std::string& person::Person::get_address() const {
	return m_address;
}

void person::Person::set_phone_number() {
	std::string phone_number{};
	bool is_valid = true;
	do {
		std::cout << "phone_number: ";
		std::cin >> phone_number;
		for (int i = 0; (i < phone_number.length() && is_valid == true); ++i) {
			if (!(phone_number[i] >= '0' && phone_number[i] <= '9')) {
				is_valid = false;
				std::cout << "Try again." << std::endl;
			}
		}
	} while (!is_valid);
		m_phone_number = phone_number;
}

const std::string& person::Person::get_phone_number() const {
	return m_phone_number;
}

void person::Person::set_gender() {
	int choose_input;
	bool is_valid = true;
	do {
		std::cout << "Choose the gender from list, for Male input 0, for Female input 1, for Other input 2:" << std::endl;
		std::cin >> choose_input;
		if (choose_input == 0) {
			m_gender = "Male";
		}
		else if (choose_input == 1) {
			m_gender = "Female";
		}
		else if (choose_input == 2) {
			m_gender = "Other";
		}
		else {
			is_valid = false;
		}
	} while (!is_valid);
}

const std::string& person::Person::get_gender() const {
	return m_gender;
}

void person::Person::show() {
	std::cout << "email: " << get_email() << std::endl;
	std::cout << "address: " << get_address() << std::endl;
	std::cout << "phone_number: " << get_phone_number() << std::endl;
	std::cout << "gender: " << get_gender() << std::endl;
	std::cout << "client_id: " << inc_client_id() << std::endl;
}

