# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/15 21:02:28 by hugo-mar          #+#    #+#              #
#    Updated: 2025/06/15 21:03:20 by hugo-mar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde

ARCHIVE = horde.a

CXX = g++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

MAKE_LIB = ar -rcs

SRCS_PATH = ./srcs/

SRCS = $(SRCS_PATH)Zombie.cpp $(SRCS_PATH)zombieHorde.cpp $(SRCS_PATH)main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

$(ARCHIVE): $(OBJS)
	$(MAKE_LIB) $(ARCHIVE) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(ARCHIVE)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re