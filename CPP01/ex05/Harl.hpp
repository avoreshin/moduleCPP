/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:02:51 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/17 23:07:26 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <ostream>

class Harl{
private:
	void debug(void);
	void info (void);
	void warning (void);
	void error (void);

public:
	void complain(std::string level);
	Harl();
	~Harl();

};

#endif