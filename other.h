/**
 * @file patients.h
 * this file defines the class Patients
 */

#ifndef OTHER_H
#define OTHER_H

#include <string>


namespace other {
	class Other {
	public:
		Other();
		Other(const std::string& position, double salary);
		~Other() = default;
	public:
		void set_salary();
		const double get_salary() const;
		void set_position();
		const std::string& get_position() const;

	private:
		double m_salary{};
		std::string m_position{};
	};
}
#endif //OTHER_H
