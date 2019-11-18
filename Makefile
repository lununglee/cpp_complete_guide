# NAME OF EXECUTABLE
NAME = Main

# COMPILER
CC = g++
CFLAGS = -Wall -Wextra -Werror -g -std=c++17

# DIRECTORIES
SRCDIR = ./srcs/
OBJDIR = ./objs/
INCDIR = ./includes/

# SRCS & OBJS
SRCS = Main.cpp \
	IOStream.cpp \
	Variables.cpp \
	PrimitiveTypes.cpp \
	SizeOfOperator.cpp \
	Constants.cpp \
	Arrays.cpp \
	Operators.cpp \
	MixedExpressions.cpp \
	Currency.cpp \
	Loops.cpp \
	Strings.cpp \
	Sastantua.cpp

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

