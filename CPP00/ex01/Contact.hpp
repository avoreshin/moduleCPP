/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:33:08 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/08 00:22:31 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact{
public:
	Contact();
	~Contact(){};
	void		setInfo();
	void 		seeCap();
	void 		contactPrint(Contact contact);
	void 		checkPrintStr (std::string str);
	void		checkPrintNum (std::int32_t num);
	void		printSearch(Contact contact);
	int			index;

private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

#endif