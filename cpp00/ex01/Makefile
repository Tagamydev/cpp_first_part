# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/24 19:28:25 by samusanc          #+#    #+#              #
#    Updated: 2023/12/11 11:30:30 by samusanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=  PhoneBook
CXXFLAGS	= -Wall -Wextra -Werror -I ./
CXXFLAGS	+= -std=c++98
CXX		= c++ $(CXXFLAGS)
MAIN	= ./main.cpp
INC		=	./Contact.hpp \
			./PhoneBook.hpp \

SRCS	= $(MAIN) \
			./Contact.cpp \
			./PhoneBook.cpp \

O_DIR	= ./objects/
OBJS	= $(addprefix $(O_DIR)/, $(SRCS:.cpp=.o))

$(O_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	@$(CXX) -c $< -o $(O_DIR)/$(<:.cpp=.o)

all: $(NAME) $(SRCS)

$(NAME): $(OBJS) $(INC)
	@$(CXX) $(OBJS) -o $(NAME)

re: fclean all

fclean: clean
	@rm -f $(NAME)
	@rm -rf objects

clean:
	@rm -f $(OBJS)

.PHONY: all
