NAME		=	phone_book

CC			=	clang++
INCLUDES	=	includes
CPPFLAGS	=	-I$(INCLUDES)
RM			=	rm -rf

SRCS		=	phone_book.cpp

all:		$(NAME)

$(NAME):
			$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

fclean:
			$(RM) $(NAME)

re:			fclean all

.PHONY:		fclean, all, re