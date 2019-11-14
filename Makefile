# NAME OF EXECUTABLE
NAME = main

# COMPILER
CC = g++
CFLAGS = -Wall -Wextra -Werror -g

# DIRECTORIES
SRCDIR = ./srcs/
OBJDIR = ./objs/
INCDIR = ./includes/

# SRCS & OBJS
SRCS = main.cpp
OBJS = $(addprefix $(OBJDIR),$(SRCS:.cpp=.o))

all: objs $(NAME)

objs:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.cpp
	$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re

