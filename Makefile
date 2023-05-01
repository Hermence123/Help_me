##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	$(shell find sources/ -name '*.cpp')

OBJ	=	$(SRC:.cpp=.o)

NAME	=	206neutrinos

all:	$(NAME)

$(NAME):	$(OBJ)
	g++ -o $(NAME) $(OBJ)	-lm

clean:
		rm -f $(OBJ)
		rm -f *~
		rm -f includes/*~
		rm -f sources/*~

fclean: 	clean
		rm -f $(NAME)

re:		fclean all
