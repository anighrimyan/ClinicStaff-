#include <iostream>
#include "person.h"
#include "doctors.h"
#include "adminStaf.h"
#include "patients.h"

unsigned int person::Person::m_client_id{};

int main() {
	std::cout << "Who would you like to input information for?\n";
	std::cout << "  1 - Employee\n";
	std::cout << "  2 - Patients\n";
	
	int choice;
	std::cin >> choice;
	std::cout << std::endl;

	//person::Person obj_Person;

	if (choice == 1)
	{
		std::cout << "Choose the position for employee\n";
		std::cout << "  1 - Doctor\n";
		std::cout << "  2 - AdminStaf\n";
		int pos{};
		std::cin >> pos;
		if (pos == 1) {
			adminstaf::AdminStaf adminStaf_obj;
			adminStaf_obj.registration();

			doctors::Doctors doctor_obj;
			doctor_obj.set_name();
			doctor_obj.set_address();
			doctor_obj.set_phone_number();
			doctor_obj.set_gender();
			doctor_obj.set_email();
			doctor_obj.set_specialty();
			doctor_obj.set_salary();
			doctor_obj.set_position();
			doctor_obj.show();
			//doctor_obj.get_specialty();
		}
		else if (pos == 2) {
			adminstaf::AdminStaf adminStaf_obj;
			adminStaf_obj.registration();
			adminStaf_obj.set_name();
			adminStaf_obj.set_address();
			adminStaf_obj.set_phone_number();
			adminStaf_obj.set_gender();
			adminStaf_obj.set_email();
			adminStaf_obj.set_salary();
			adminStaf_obj.set_position();
			adminStaf_obj.show();
		}
	}
	else if (choice == 2)
	{
		adminstaf::AdminStaf adminStaf_obj;
		patients::Patients patients_obj;
		adminStaf_obj.registration();
		patients_obj.set_name();
		patients_obj.set_address();
		patients_obj.set_phone_number();
		patients_obj.set_gender();
		patients_obj.set_email();
		patients_obj.set_health_rec_num();
		patients_obj.set_data_of_birth();
		patients_obj.set_diagnosis();
		patients_obj.show();
	}
	
	std::cout << "Class end!!!!!!" << std::endl;
	
	return 0;
}