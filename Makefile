NAME_P = push_swap
NAME_T = checker

SRCS_P =	srcs/check.c \
			srcs/main_push_swap.c \
			srcs/quit.c \
			srcs/test.c \
			srcs/all_params_is_int.c \
			srcs/set_all.c \
			srcs/rules/*.c

SRCS_T =	srcs/check.c \
			srcs/main_checker.c \
			srcs/quit.c \
			srcs/test.c \
			srcs/all_params_is_int.c \
			srcs/set_all.c \
			srcs/rules/*.c


CC = clang

FLAGS = -Wall -Wextra -Werror

$(NAME_P):
	$(CC) $(FLAGS) -o $(NAME_P) libft/libft.a $(SRCS_P)
$(NAME_T):
	$(CC) $(FLAGS) -o $(NAME_T) libft/libft.a $(SRCS_T)
lib:
	$(MAKE) -C libft

all : lib $(NAME_P) $(NAME_T)


clean :
	rm -rf $(SURPL_O)
	#$(MAKE) -C libft clean

fclean : clean
	rm -rf $(NAME_P)
	#rm -rf libft/libft.a

re : fclean all

.PHONY:	all clean fclean re
