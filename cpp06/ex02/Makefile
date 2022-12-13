# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vducoulo <vducoulo@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 11:14:42 by vducoulo          #+#    #+#              #
#    Updated: 2022/12/13 01:02:13 by vducoulo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS		=	A.cpp			\
				B.cpp			\
				C.cpp			\
				Base.cpp		\

OBJS		=	$(addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o})

OBJS_DIR	=	objects
SRCS_DIR	=	srcs

INCLUDES	=	includes/A.hpp		\
				includes/B.hpp		\
				includes/C.hpp		\
				includes/Base.hpp	\

CC			= 	c++
CFLAGS		= 	-std=c++98 -Wall -Wextra -Werror 

LIBINCLUDES	=	-Iincludes

LIB			=	base.a

EXEC		=	Base

RM			=	rm -rf

MKDIR		=	mkdir -p

all:		${EXEC}

${OBJS_DIR}/%.o: 	${SRCS_DIR}/%.cpp	${INCLUDES} Makefile
			${MKDIR} $(@D)
			${CC} ${CFLAGS} ${LIBINCLUDES} -c $< -o $@

$(LIB):		${OBJS} ${INCLUDES}
			ar rcs ${LIB} ${OBJS}


${EXEC}:	main.cpp
			$(CC) ${CFLAGS} ${LIBINCLUDES} main.cpp ${EXECINCLUDES} -o ${EXEC}

clean:
			${RM} ${OBJS} $(OBJS_DIR)

fclean:		clean
			${RM} ${LIB} ${EXEC} ${LIB} ${EXEC}.dSYM

re:			fclean all

.PHONY: 	all clean fclean re object