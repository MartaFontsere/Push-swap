# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfontser <mfontser@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/07 03:53:26 by mfontser          #+#    #+#              #
#    Updated: 2024/02/15 19:30:11 by mfontser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------VARIABLES---------------------------------------------------#


SRCS =  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c

SRCSBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 
 			
OBJS = ${SRCS:.c=.o}
	#se crearan los object files a partir de los source files cambiando el .c por .o
OBJSBONUS = ${SRCSBONUS:.c=.o}
	#se crearan los object bonus files a partir de los source bonus files cambiando el .c por .o
NAME = libft.a
HEADER = libft.h

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
#comandos para compilar (compilador, flags, borrar)
	#Podria crear la variable AR = ar rcs, dentro de este grupo, ya que es el comando que permite compilar los archivos para la libreria

#--------------------------------------------------NORMAS----------------------------------------------------#


#Metodo implicito
%.o:%.c libft.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@
#compila todos los .c en .o


# Mis metodos
all: ${NAME}
#crea la libreria, libft.a

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}
#declaro la relacion de dependencia entre el libft.a y los archivos que debe contener (los .o transformados a patir de los .c)

bonus: ${OBJS} ${OBJSBONUS} 
	ar rcs ${NAME} ${OBJS} ${OBJSBONUS} 
	@touch $@

clean:
	${RM} ${OBJS} ${OBJSBONUS}
#borra todos los .o

fclean: clean
	${RM} ${NAME} 
	${RM} bonus
#borra todos los .o y el libft.a

re: fclean all
	echo "re done"

.PHONY: all clean fclean re
#para no confundir estos comandos con nombres de archivos

#ar rcs: crea una biblioteca nueva con los archivos o la actualiza y genera un indice para permitir un acceso mas rapido a los contenidos
