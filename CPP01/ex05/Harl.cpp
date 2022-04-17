
#include "Harl.hpp"
#include <iostream>

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special- "
				 "ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {

}

void Harl::warning(void) {

}

void Harl::error(void) {

}

void Harl::complain(std::string level) {

	switch (1) {
		case (1):
			this->debug();
			break;
	}

}

Harl::Harl() {};
Harl::~Harl() {};
