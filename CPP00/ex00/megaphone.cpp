/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:17:23 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/07 18:17:59 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>





int main(int argc, char **argv) {

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	else {
		for(int j = 1; argc > j; j++) {
			for (int i = 0; (int)strlen(argv[j]) > i; i++) {
				std::cout << (char)toupper(argv[j][i]);
			}
		}
		std::cout<<std::endl;
	}
	return 0;
}

