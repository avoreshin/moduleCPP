/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:52:29 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/08 00:39:40 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main (){
	std::string str;
	
	PhoneBook contact;

	while(1) {
		std::cout << "\e[1;32m";
		std::cout << "Available commands: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit (0);
		if (str == "ADD" ) {
			contact.add();
		}
		else if (str == "SEARCH" ) {
				contact.search();
		}
		else if (str == "EXIT" ) {
			std::cout << "BYE-BYE" << std::endl;
			break;
		}
	}
	std::cout << "\e[0m";
	return 0;
}