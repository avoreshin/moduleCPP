/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 20:18:46 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/15 20:18:49 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


int main (){
	std::string line;
	std::ifstream in("./text.txt");
	if(in.is_open())
	{
		while(getline(in,line))
		{
			std::cout << line <<std::endl;
		}
	}
	return 0;
}