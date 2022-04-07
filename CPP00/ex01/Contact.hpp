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
	int			index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	int			phone_number;
private:
	std::string	darkest_secret;
};

#endif