/**
 * @file adminStaf.h
 * this file defines the class AdminStaf
 */

#ifndef ADMINSTAF_H
#define ADMINSTAF_H

#include <string>
#include "person.h"
#include "other.h"


namespace adminstaf {
	class AdminStaf : public person::Person, public other::Other {
	public:
		AdminStaf();
		~AdminStaf() = default;

	public:
		void registration(); 
		void show() override;
	};
}
#endif //ADMINSTAF_H
