/**
 * @file person.h
 * this file defines the class Person
 */

#ifndef PERSON_H
#define PERSON_H

#include <string>

namespace person {

	class Person {
	public:
		Person();
		Person(const std::string& name,
			   const std::string& address,
			   const std::string& phone_number,
		       const std::string& gender,
			   const std::string& email);
		~Person() = default;

	public:
		void set_name();
	    const std::string& get_name() const;
		void set_email();
		const std::string& get_email() const;
		void set_address();
		const std::string& get_address() const;
		void set_phone_number();
		const std::string& get_phone_number() const;
		void set_gender();
		const std::string& get_gender() const;
		virtual void show() = 0;
		static int inc_client_id() {
			++m_client_id;
			return m_client_id;
		}

	private:
		std::string m_name{};
		std::string m_email{};
		std::string m_address{};
		std::string m_phone_number{};
		std::string m_gender{};
		static unsigned int m_client_id;
	};
}
#endif // !PERSON_H

