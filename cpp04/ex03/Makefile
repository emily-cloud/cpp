NAME = recap

CPP = c++

CFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm -rf

SRCS = main.cpp AMateria.cpp ICharacter.cpp Cure.cpp Ice.cpp \
		IMateriaSource.cpp Character.cpp MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(OBJS) $(NAME)

re : fclean all
