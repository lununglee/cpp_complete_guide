# NAME OF EXECUTABLE
NAME = Main

# COMPILER
CC = clang++
CFLAGS = -Wall -Wextra -Werror -g -std=c++17

# DIRECTORIES
SRCDIR = ./Srcs/
OBJDIR = ./Objs/
INCDIR = ./Includes/

# SRCS & OBJS
SRCS = Main.cpp \
	Account.cpp \
	Player.cpp \
	Shallow.cpp \
	Deep.cpp \
	Move.cpp \
	Movie.cpp \
	Movies.cpp \
	MyString.cpp \
	MSC.cpp \
	MSCNonMember.cpp \
	AccountInherit.cpp \
	SavingsAccountInherit.cpp \
	Sastantua.cpp \
	Section04.cpp \
	Section05.cpp \
	Section06.cpp \
	Section07.cpp \
	Section08.cpp \
	Section09.cpp \
	Section10.cpp \
	Section11.cpp \
	Section12.cpp \
	Section13.cpp \
	Section14.cpp \
	Section15.cpp \
	Section16.cpp \
	Section17.cpp \
	Section18.cpp

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
