##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## NO DESCRIPTION FOUND
##

SRC	=	$(shell find . -type f -name '*.c')

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

INCLUDE	=	my.h

INCLUDE2	=	mylist.h

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c *.c
	ar rc libmy.a *o
	cp -r $(NAME) ../
	mkdir ../../include/
	cp -r $(INCLUDE) ../../include/
	cp -r $(INCLUDE2) ../../include/
	rm *.o

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

reset:
	rm *.o
	rm -r ../../include/
	rm -r ../libmy.a
	rm -r ./libmy.a
