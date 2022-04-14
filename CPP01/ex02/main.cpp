/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:32:51 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/13 23:42:29 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void){
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;


	std::cout <<"The memory address of the string variable: "
	<< &string<< std::endl;
	std::cout <<"The memory address held by stringPTR: "
	<< stringPTR << std::endl;
	std::cout <<"The memory address held by stringREF: "
	<< &stringREF << std::endl;
	std::cout <<"The value of the string variable: "
			 << string << std::endl;
	std::cout <<"The value pointed to by stringPTR: "
			<< *stringPTR  << std::endl;
	std::cout <<"The value pointed to by stringREF: "
			  << stringREF  << std::endl;
	return 0;
}