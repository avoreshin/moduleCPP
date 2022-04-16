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

int main (int argc, char **argv){

	if (argc != 4){
	std::cerr << "Wrong number of arguments" << std::endl;
		return 1;
	}
	std::string line;
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream fin(argv[1]);
 	std::ofstream fou(argv[1] + (const std::string)".replace");
	 if (!fin || !fou){
		 std::cerr << "Error: can't open the file" << std::endl;
		 fin.close();
		 fou.close();
		 return 1;
	 }

	if(fin.is_open())
	{
		size_t i;
		while(getline(fin,line))
		{
			for(;;) {
				i = line.find(s1);
				if (std::string::npos == i)
					break ;
				line.erase(i, s1.length());
				line.insert(i,s2);
			}
			fou << line << std::endl;
		}
	}
	return 0;
}

