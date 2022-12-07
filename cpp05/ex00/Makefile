# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vducoulo <vducoulo@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 11:14:42 by vducoulo          #+#    #+#              #
#    Updated: 2022/12/07 12:48:42 by vducoulo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS		=	Bureaucrat.cpp			\

OBJS		=	$(addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o})

OBJS_DIR	=	objects
SRCS_DIR	=	srcs

INCLUDES	=	includes/Bureaucrat.hpp			\

CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

LIBINCLUDES	=	-Iincludes

LIB			=	bureau.a

EXEC		=	Bureaucrat

RM			=	rm -rf

MKDIR		=	mkdir -p

all:		${EXEC}

${OBJS_DIR}/%.o: 	${SRCS_DIR}/%.cpp	${INCLUDES} Makefile
			${MKDIR} $(@D)
			${CC} ${CFLAGS} ${LIBINCLUDES} -c $< -o $@

$(LIB):		${OBJS} ${INCLUDES}
			ar rcs ${LIB} ${OBJS}


${EXEC}:	main.cpp ${LIB}
			$(CC) ${CFLAGS} ${LIBINCLUDES} main.cpp ${EXECINCLUDES} ${LIB} -o ${EXEC}

clean:
			${RM} ${OBJS} $(OBJS_DIR)

fclean:		clean
			${RM} ${LIB} ${EXEC} ${LIB} ${EXEC}.dSYM

re:			fclean all

.PHONY: 	all clean fclean re object