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

PhoneBook::PhoneBook() {
	count = 0;
}

void PhoneBook::add(){
	PhoneBook::Contact1[count].setInfo();
	PhoneBook::Contact1[count].index = count + 1;
	count += 1;
	
//	for(int i = 0; count > i; i++){
//		std::cout << i << ". " << PhoneBook::Contact1[i].first_name << std::endl;
//	}
}
void PhoneBook::search() {
	if(count > 0) {
		PhoneBook::Contact1[0].seeCap();
		for (int i = 0; count > i; i++) {
			std::cout << "|";
			Contact1[i].checkPrintNum(Contact1[i].index);
			std::cout << "|";
			Contact1[i].checkPrintStr(Contact1[i].first_name);
			std::cout << "|";
			Contact1[i].checkPrintStr(Contact1[i].last_name);
			std::cout << "|";
			Contact1[i].checkPrintStr(Contact1[i].nickname);
			std::cout << "|" << std::endl;
		}
	}

}