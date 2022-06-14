# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 21:47:47 by malbuque          #+#    #+#              #
#    Updated: 2022/06/14 19:22:21 by malbuque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER =	server
CLIENT =	client


# Variavel do executaveis
PROG_SRC = 		server.c
PROG_OBJ = 		$(PROG_SRC:.c=.o)

# Variavel da biblioteca - Caminho dos arquivos do libft
LIBFT		= $(LIB_PATH)/libft.a
# Variavel da biblioteca - Diretorio da libft
LIB_PATH	= ./libft

# Varivel dos arquivos do programa 
# SRCS_PATH: diretorio do cod fonte
SRCS_PATH	= ./srcs
# INC_PATH: diretorio dos Header files
INC_PATH	= ./includes
# OBJS_PATH: diretorio dos binarios (o.)
OBJS_PATH	= ./objs
# INSRC		= $(wildcard $(INC_PATH)*.h)
# SRCS		= $(wildcard *.c)
# OBJS		= $(patsubst %.c, $(OBJS_PATH)%.o, $(SRCS))

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -g
INCLUDES	= -I$(LIB_PATH)/includes -I../Minitalk
RM_DIR		= rm -Rf
RM			= rm -f

all:	$(SERVER) $(CLIENT)

# Regra para compilar o libft
$(LIBFT):
			$(MAKE) -C $(LIB_PATH)

# Criar o diretorio dos Binarios
$(OBJS_PATH):
			mkdir $(OBJS_PATH)

# Compilaçao do .c para .o  -- @silenciar o output
%.o: %.c
			@$(CC) $(CFLAGS) $(INCLUDES) -c $(<) -o $(@)

# Copilar o executavel -- -g para begug -L vai buscar o diretorio da variavel 
# -lft -o definier o nome do binario/ output
$(SERVER): $(PROG_OBJ) $(LIBFT)
			$(CC) $(CFLAGS) -g -L$(LIB_PATH) -lft $(^) -o $(@)

cleanlib:
	$(MAKE) -C $(LIB_PATH) fclean

clean:
	$(RM) *.o
#$(PROG_OBJ)

fclean:	clean cleanlib
	$(RM) $(SERVER) $(CLIENT)

re:fclean all
