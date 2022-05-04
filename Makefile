SRCS 			= 	ft_initialize_chain.c \
					ft_initialize_flags.c \
					ft_parser.c \
					ft_print_char.c \
					ft_print_flag.c \
					ft_printf.c \

OBJS			= $(SRCS:.c=.o)


CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS) printf.h
				ar -rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re bonus
