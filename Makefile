
NAME = 		main

PROG_SRC = 		./main.c
PROG_OBJ = 		$(PROG_SRC:.c=.o)

LIBFT		= $(LIB_PATH)/libft.a
LIB_PATH	= ./libft

SRCS_PATH	= ./srcs
INC_PATH	= ./includes
OBJS_PATH	= ./objs
# INSRC		= $(wildcard $(INC_PATH)*.h)
# SRCS		= $(wildcard *.c)
# OBJS		= $(patsubst %.c, $(OBJS_PATH)%.o, $(SRCS))

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror 
INCLUDES	= -I$(LIB_PATH)/includes -I../Minitalk
RM_DIR		= rm -Rf
RM			= rm -f

all:	$(NAME)

$(LIBFT):
			$(MAKE) -C $(LIB_PATH)

$(OBJS_PATH):
			mkdir $(OBJS_PATH)

%.o: %.c
			$(CC) $(CFLAGS) $(INCLUDES) -c $(<) -o $(@)

$(NAME): $(PROG_OBJ) $(LIBFT)
			$(CC) $(CFLAGS) -g -L$(LIB_PATH) -lft $(^) -o $(@)

cleanlib:
	$(MAKE) -C $(LIB_PATH) fclean

clean:
	$(RM_DIR) $(OBJS_PATH)

fclean:	clean cleanlib
			$(RM) $(NAME)

re:fclean all
