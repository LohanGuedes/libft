SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_atoi.c ft_strdup.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_strrchr.c ft_strchr.c ft_tolower.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_strncmp.c ft_strnstr.c ft_itoa.c ft_putendl_fd.c ft_striteri.c ft_strmapi.c ft_putnbr_fd.c ft_split.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

HEADER	= libft.h

NAME	= libft.a

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

AR_RC 	= ar rc

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR_RC} ${NAME} ${OBJS} 

bonus:		${OBJS_BONUS}
			${AR_RC} ${NAME} ${OBJS_BONUS}

all:		$(NAME)

clean:		
			${RM} ${OBJS}
			${RM} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
