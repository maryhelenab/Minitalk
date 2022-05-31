# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 19:22:30 by malbuque          #+#    #+#              #
#    Updated: 2022/05/31 21:34:30 by malbuque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		libft.a

INC_PATH =	includes
SRCS =		$(wildcard srcs/*.c)

OBJS =		$(patsubst srcs/%.c, objs/%.o, $(SRCS))

BONUS_SRCS	=	ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c

BONUS_OBJS 	= $(BONUS_SRCS:.c=.o)

CC =		gcc
CFLAGS =	-Wall -Wextra -Werror -I$(INC_PATH)
RM =		rm -rf

all:	objs_dir $(NAME)

$(NAME): $(OBJS)
		@ar rc $(NAME) $(OBJS)

objs/%.o:	srcs/%.c
		@$(CC) $(CFLAGS) -c $(<) -o $(@)

bonus: $(OBJS) $(BONUS_OBJS)
		ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

objs_dir:
		mkdir -p objs

clean:
		$(RM) objs $(BONUS_OBJS)

fclean:	clean
		$(RM) $(NAME)

re:fclean all
