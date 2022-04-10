SRCS			= Contact.cpp PhoneBook.cpp main.cpp \
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME			= phonebook

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

#test:			$(NAME)
#				./megaphone "shhhhh... I think the students are asleep..."
#				./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
#				./megaphone

.PHONY:			all clean fclean re%