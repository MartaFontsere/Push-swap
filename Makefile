# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfontser <mfontser@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/07 03:53:26 by mfontser          #+#    #+#              #
#    Updated: 2024/03/14 23:22:00 by mfontser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------VARIABLES---------------------------------------------------#


SRCS = 		
OBJS = ${SRCS:.c=.o}


NAME = push_swap.a
HEADER = push_swap.h

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror


#--------------------------------------------------NORMAS----------------------------------------------------#


#Metodo implicito
%.o:%.c ft_printf.h Makefile Libft/libft.a  
	$(CC) $(CFLAGS) -c $< -o $@

# Mis metodos
all: make_libs ${NAME}          

make_libs:
	Make -C Libft               

${NAME}: ${OBJS} 				 	
	cp Libft/libft.a ${NAME}    
	ar rcs ${NAME} ${OBJS}      

clean:
	${RM} ${OBJS}
	Make -C Libft clean         

fclean: clean
	${RM} ${NAME} 
	Make -C Libft fclean	    

test:
	gcc -Wall -Werror -Wextra ${SRCS} main.c
	./a.out
	@rm a.out

re: fclean all
	@echo "re done"

.PHONY: all clean fclean re
