SRCS 			= 	ft_initialize_chain.c \
					ft_initialize_flags.c \
					ft_parser.c \
					ft_print_char.c \
					ft_print_flag.c \
					ft_printf.c \
					ft_print_int.c \
					ft_print_str.c \
					ft_print_hex.c \
					ft_update_flag.c \


# LIBFTFILES		=	strchr
# LIBFTSRCS 		= $(addprefix libft/ft_,$(addsuffix .c, $(LIBFTFILES)))  : in the case I have "strchr"

LIBFTFILES		=	ft_strchr.c \
					ft_itoa.c \
					ft_strlen.c \
					ft_strdup.c \
					# ft_itoa_base.c \


LIBFTSRCS		= $(addprefix libft/,$(LIBFTFILES))

OBJS			= $(SRCS:.c=.o)
LIBFTOBJ 		= $(LIBFTSRCS:.c=.o)
HEADER			= ft_printf.h

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS) $(LIBFTOBJ) printf.h
				ar -rcs $(NAME) $(OBJS) $(LIBFTOBJ)

%.o: %.c $(HEADER)
	${CC} ${CFLAGS} -c $< -o $@ 

clean:
				$(RM) $(OBJS) $(LIBFTOBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re bonus
