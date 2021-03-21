NAME = replace

CXX = clang++
CPPFLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRCS_FILES = main.cpp
OBJS = $(SRCS_FILES:.cpp=.o)

all: 		$(NAME)

$(NAME): 	$(OBJS)
			$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re: 		fclean all
