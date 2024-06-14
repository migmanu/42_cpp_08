SRCS = main.cpp

CC = c++

COMPILER_FLAGS = -Werror -Wextra -Wall -std=c++98 -g

OBJ_NAME = exec

$(OBJ_NAME) : $(SRCS)
	@$(CC) $(SRCS) $(COMPILER_FLAGS) -o $(OBJ_NAME)

clean : 
	@rm -f $(OBJ_NAME)

re : clean $(OBJ_NAME)

.PHONY : clean re
