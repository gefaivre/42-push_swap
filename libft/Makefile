SRCS			=	ft_memset.c ft_bzero.c ft_memcpy.c \
					ft_memccpy.c ft_memmove.c ft_memchr.c \
					ft_memcmp.c ft_strlen.c ft_isalpha.c \
					ft_isdigit.c ft_isalnum.c ft_isascii.c \
					ft_isprint.c ft_toupper.c ft_tolower.c \
					ft_strchr.c ft_strrchr.c ft_strncmp.c \
					ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
					ft_atoi.c ft_calloc.c ft_strdup.c \
					\
					ft_substr.c ft_strjoin.c ft_strtrim.c \
					ft_split.c ft_itoa.c ft_strmapi.c \
					ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
					ft_putnbr_fd.c ft_strcpy.c \
					\
					ft_intmin.c ft_intmax.c \
					\
					ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
					ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
					ft_lstclear.c ft_lstiter.c ft_lstmap.c \
					ft_lstsize_longer.c \
					get_next_line_utils.c \
					get_next_line.c \
					ft_printf/ft_printf.c \
					ft_printf/utils_1.c \
					ft_printf/utils_2.c \
					ft_printf/utils_3.c \
					ft_printf/utils_4.c \
					ft_printf/utils_5.c \
					ft_printf/ft_redirect_to_args_type.c \
					ft_printf/ft_treat_c.c \
					ft_printf/ft_treat_i.c \
					ft_printf/ft_treat_i_2.c \
					ft_printf/ft_treat_s.c \
					ft_printf/ft_treat_u.c \
					ft_printf/ft_treat_u_2.c \
					ft_printf/ft_treat_x.c \
					ft_printf/ft_treat_x_2.c \
					ft_printf/ft_treat_xup.c \
					ft_printf/ft_treat_xup_2.c \
					ft_printf/ft_treat_per.c \
					ft_printf/ft_treat_p.c \

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib ${NAME}

all	:$(NAME)


clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re so

