NAME = libft.a
SRCS = ./ft_isalpha.c ./ft_isdigit.c ./ft_isalnum.c ./ft_isascii.c ./ft_isprint.c \
	   ./ft_toupper.c ./ft_tolower.c \
	   ./ft_strlen.c ./ft_strchr.c ./ft_strrchr.c ./ft_strncmp.c ./ft_strnstr.c \
	   ./ft_strlcpy.c \
	   ./ft_memset.c ./ft_bzero.c ./ft_memcpy.c ./ft_memmove.c \
	   ./ft_memchr.c ./ft_memcmp.c \
	   ./ft_calloc.c ./ft_strdup.c ./ft_atoi.c

OBJS = ${SRCS:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
