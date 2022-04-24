/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:04:40 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/24 09:17:24 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {
public:
   	Fixed(void);
	Fixed( Fixed const &fixed );
	Fixed &operator=( Fixed const &fixed );
    ~Fixed(void);
    int getRawBits( void ) const;
    void setRawBits( int const raw );

private:
    int _value;
    static const int _fractionalBits = 8;
};

#endif