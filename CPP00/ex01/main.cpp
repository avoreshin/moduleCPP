/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:52:29 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/09 22:35:16 by jlamonic         ###   ########.fr       */
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
		if (str == "SEARCH" ) {
			std::cout << "SEARCH: " << str << std::endl;
		}
		if (str == "EXIT" ){
				std::cout << "EXIT: " << str << std::endl;
			}
	}
	return 0;
}