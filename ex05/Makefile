# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/18 19:14:20 by hugo-mar          #+#    #+#              #
#    Updated: 2025/06/18 19:16:54 by hugo-mar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

ARCHIVE = harl.a

CXX = g++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

MAKE_LIB = ar -rcs

SRCS_PATH = ./srcs/

SRCS = $(SRCS_PATH)main.cpp $(SRCS_PATH)Harl.cpp

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