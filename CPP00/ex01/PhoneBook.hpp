/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:28:58 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/08 00:35:17 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook();
	~PhoneBook() {};
	int count;
	int countplus;
	Contact Contact1[8];
	void add ();
	void search ();
	void exit();
	int checkInput(std::string);
};


#endif