##
## Makefile for  in /home/bauwen_j/rendu/my_git/minitalk
## 
## Made by bauwen_j
## Login   <bauwen_j@epitech.eu>
## 
## Started on  Mon Mar 17 16:12:24 2014 bauwen_j
## Last update Mon Mar 17 16:12:24 2014 bauwen_j
##

SRCS1	= fct_client/client_main.c

SRCS2	= fct_server/serveur_main.c

SRCI	= src/get_num.c \
	  src/str.c

OBJSI	= $(SRCI:.c=.o)

OBJS1	= $(SRCS1:.c=.o)

OBJS2	= $(SRCS2:.c=.o)

NAME1	= client

NAME2	= server

CC	= cc

CFLAGS	+= -W -Wall -Wextra
CFLAGS	+= -I includes/

RM	= rm -f

all:	$(NAME1) $(NAME2)

$(NAME1):	$(OBJS1) $(OBJSI)
	$(CC) -o $(NAME1) $(OBJS1) $(OBJSI)

$(NAME2):	$(OBJS2) $(OBJSI)
	$(CC) -o $(NAME2) $(OBJS2) $(OBJSI)

clean:
	$(RM) $(OBJS1) $(OBJS2) $(OBJSI)

fclean:	clean
	$(RM) $(NAME1) $(NAME2)

re:	fclean all

.PHONY:	all clean fclean re
