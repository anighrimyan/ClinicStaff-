/**
 * @file patients.h
 * this file defines the class Patients
 */

#ifndef PATIENTS_H
#define PATIENTS_H

#include <string>
#include "person.h"

namespace patients {
	class Patients : public person::Person {
	public:
		Patients();
		Patients(const std::string& health_rec_num, const std::string& data_of_birth, const std::string& diagnosis);
		~Patients() = default;

	public:
		void set_health_rec_num();
		const std::string& get_health_rec_num() const;
		void set_data_of_birth();
		const std::string& get_data_of_birth() const;
		void set_diagnosis();
		const std::string& get_diagnosis() const;
		void show() override;

	private:
		/// bolor tvyalner@ petq e mutqagri adminstaf@
		std::string m_health_rec_num{};
		std::string m_data_of_birth{};
		std::string m_diagnosis{};
	};
}
#endif //PATIENTS_H