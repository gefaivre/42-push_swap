NAME_P = push_swap
NAME_T = checker

SRCS_P =	srcs/check.c \
			srcs/main_push_swap.c \
			srcs/quit.c \
			srcs/test.c \
			srcs/all_params_is_int.c \
			srcs/set_all.c \
			srcs/rules/*.c \
			srcs/big_sort.c \
			srcs/push_all_med_to_b.c \
			srcs/push_all_med_to_a.c


SRCS_T =	srcs/check.c \
			srcs/main_checker.c \
			srcs/quit.c \
			srcs/test.c \
			srcs/all_params_is_int.c \
			srcs/set_all.c \
			srcs/rules/*.c \
			srcs/big_sort.c \
			srcs/push_all_med_to_b.c \
			srcs/push_all_med_to_a.c




CC = clang

FLAGS = -Wall -Wextra -Werror

$(NAME_P):
	$(CC) $(FLAGS) -o $(NAME_P) libft/libft.a $(SRCS_P)

lib:
	$(MAKE) -C libft

all : $(NAME_P)

check:
	$(CC) $(FLAGS) -o $(NAME_T) libft/libft.a $(SRCS_T)


clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME_P) $(NAME_T)

re : fclean all

.PHONY:	all clean fclean re
