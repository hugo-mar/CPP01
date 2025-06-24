# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/16 00:03:25 by hugo-mar          #+#    #+#              #
#    Updated: 2025/06/24 08:36:41 by hugo-mar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

ARCHIVE = brain.a

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

MAKE_LIB = ar -rcs

SRCS_PATH = ./srcs/

SRCS = $(SRCS_PATH)main.cpp

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