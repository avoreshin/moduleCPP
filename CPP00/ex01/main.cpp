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
		std::getline(std::cin, str);
		std::cout << "string: " << str << std::endl;
		if (str == "ADD" ){
			contact.add();
			std::cout << "ADD: " << str << std::endl;
		}
		else if (str == "SEARCH" ) {
			std::cout << "SEARCH: " << str << std::endl;
		}
		else if (str == "EXIT" ){
				std::cout << "BYE-BYE" << std::endl;
			break;
			}
	}
	return 0;
}