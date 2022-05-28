# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlamonic <jlamonic@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/23 23:05:16 by jlamonic          #+#    #+#              #
#    Updated: 2022/05/28 16:38:21 by jlamonic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
				RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME			= main

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re%