/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:55:42 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/08 00:01:58 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() {
	index = 0;
}

void Contact::contactPrint(Contact contact) {

		std::cout << "|";
		contact.checkPrintNum(contact.index);
		std::cout << "|";
		contact.checkPrintStr(contact.first_name);
		std::cout << "|";
		contact.checkPrintStr(contact.last_name);
		std::cout << "|";
		contact.checkPrintStr(contact.nickname);
		std::cout << "|" << std::endl;
}

void	Contact::setInfo() {
	std::cout << "First name: ";
	std::cin >> Contact::first_name;
	std::cout << "Last_name: ";
	std::cin >> Contact::last_name;
	std::cout << "Nickname: ";
	std::cin >> Contact::nickname;
	std::cout << "Phone number: ";
	std::cin >> Contact::phone_number;
	std::cout << "Darkest secret: ";
	std::cin >> Contact::darkest_secret;
	std::cin.ignore();
}

void Contact::seeCap(){
	std::cout 	<< "-----------" << "-----------" << "-----------" << "-----------\n"
				<< "|  index  |" << "first name|" << "last name |" << " nickname |\n"
				<< "-----------" << "-----------" << "-----------" << "-----------\n";
}

void Contact::checkPrintStr(std::string str) {
	if (str.size() > 10)
		std::cout << str.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void Contact::checkPrintNum (std::int32_t num) {
		std::cout << std::setw(9) << num;
}

void Contact::printSearch(Contact contact){
	std::cout << "Index: " << contact.index << std::endl;
	std::cout << "First name: " << contact.first_name << std::endl;
	std::cout << "Last name: " << contact.last_name << std::endl;
	std::cout << "Nickname: "<< contact.nickname << std::endl;
	std::cout << "Phone number: " << contact.phone_number <<  std::endl;
	std::cout << "Darkest secret: " << contact.darkest_secret << std::endl;
}
