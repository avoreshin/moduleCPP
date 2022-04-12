/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:21:04 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/08 00:38:16 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::checkInput(std::string str){
	int num;
	try{
		num = std::stoi(str);
	}
	catch (std::invalid_argument e) {
		std::cout << "Invalid input!!!" << std::endl;
		return 0;
	}
	if (num > 8 || num < 1) {
		
		return 0;
	}
	return num;
}

PhoneBook::PhoneBook() {
	count = 0;
	countplus = 0;
}

void PhoneBook::add(){
	std::cout << "Enter a contact: " << std::endl;
	if (count == 8) {
		count = 0;
		countplus = 8;
	}
	PhoneBook::Contact1[count].setInfo();
	PhoneBook::Contact1[count].index = count + 1;
	count += 1;
	countplus++;
	if (countplus > 8)
		countplus = 8;
}
void PhoneBook::search() {
	int k;
	std::string input;
	if (count == 0) {
		std::cout << "No contacts" << std::endl;
		return ;
	}
		PhoneBook::Contact1[0].seeCap();
		for (int i = 0; countplus > i; i++) {
			Contact1[i].contactPrint(Contact1[i]);
		}
		std::cout << "Please enter index (1 - 8):";
		std::cin >> input;
		std::cin.ignore();
		if ((k = PhoneBook::checkInput(input)) > countplus || k == 0){
			std::cout << "No such index" << std::endl;
			return ;
		}
		Contact1[k - 1].printSearch(Contact1[k - 1]);
}