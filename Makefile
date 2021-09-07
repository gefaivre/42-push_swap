NAME_P = push_swap
CC = clang
FLAGS = -Wall -Wextra -Werror

SRCS_P =	srcs/check.c \
			srcs/main_push_swap.c \
			srcs/quit.c \
			srcs/test.c \
			srcs/all_params_is_int.c \
			srcs/set_all.c \
			srcs/mini_sort.c \
			srcs/medium_sort.c \
			srcs/big_sort.c \
			srcs/push_all_med_to_b.c \
			srcs/push_all_med_to_a.c \
			srcs/first_in_med.c \
			srcs/lib_fonction.c \
			\
			srcs/rules/pa.c \
			srcs/rules/pb.c \
			srcs/rules/ra.c \
			srcs/rules/rb.c \
			srcs/rules/rr.c \
			srcs/rules/rra.c \
			srcs/rules/rrb.c \
			srcs/rules/rrr.c \
			srcs/rules/sa.c \
			srcs/rules/sb.c \
			srcs/rules/ss.c

OBJS_P=$(SRCS_P:.c=.o)


all:$(NAME_P)

$(NAME_P): $(OBJS_P)
	$(CC) $(FLAGS) -o $(NAME_P)  $(SRCS_P) -fsanitize=address

clean:
	rm -rf *.o
	rm -rf srcs/*.o
	rm -rf srcs/rules/*.o

fclean:clean
	rm -rf $(NAME_P)


re:fclean all

.PHONY:	all clean fclean re
