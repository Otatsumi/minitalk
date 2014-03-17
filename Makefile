##
## Makefile for  in /home/bauwen_j/rendu/my_git/minitalk
## 
## Made by bauwen_j
## Login   <bauwen_j@epitech.eu>
## 
## Started on  Mon Mar 17 16:12:24 2014 bauwen_j
## Last update Mon Mar 17 16:12:24 2014 bauwen_j
##

SRCS	= 

OBJS	= $(SRCS:.c=.o)

NAME	= 

CC	= cc

CFLAGS	+= -W -Wall -Wextra -pedantic -ansi
CFLAGS	+= -I includes/

RM	= rm -f

CP	= cp -f

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS)
	$(CP) $(NAME) bin/$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME) bin/$(NAME)

re:	fclean all

.PHONY:	all clean fclean re