/**
 * @file doctors.h
 * this file defines the class Doctors
 */

#ifndef DOCTORS_H
#define DOCTORS_H
 
#include <string>
#include "person.h"
#include "other.h"
#include "patients.h"


namespace doctors {
	class Doctors : public person::Person, public other::Other {
	public:
		Doctors();
		Doctors(const std::string& specialty);
		~Doctors();

	public: 
		void set_specialty();
		const std::string& get_specialty() const;
		void show() override;
		//void make_diag(patients::Patients*);

	private:
		std::string m_specialty{};
		patients::Patients* ptr_patient = nullptr;
	};
}
#endif //DOCTORS_H