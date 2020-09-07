SRC = main.cpp Vec3.cpp
OBJ = $(SRC:%.cpp=%.o)
CFLAGS = -g -std=c++14

main: $(OBJ)
		g++ $^

.cpp.o:
		g++ -g -std=c++14 -c $<

clean:
		rm -rf *.o *.out
