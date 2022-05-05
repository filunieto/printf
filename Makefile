SRCS 			= 	ft_initialize_chain.c \
					ft_initialize_flags.c \
					ft_parser.c \
					ft_print_char.c \
					ft_print_flag.c \
					ft_printf.c \

LIBFTSRCS 		= 	libft/ft_strchr.c


OBJS			= $(SRCS:.c=.o)
LIBFTOBJ 		= $(LIBFTSRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS) $(LIBFTOBJ) printf.h
				ar -rcs $(NAME) $(OBJS) $(LIBFTOBJ)

%.o: %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@ 

clean:
				$(RM) $(OBJS) $(LIBFTOBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re bonus
