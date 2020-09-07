SRC = main.cpp Vec3.cpp
OBJ = $(SRC:%.cpp=%.o)
CFLAGS = -g -std=c++14

main: $(OBJ)
		g++ $^

.cpp.o:
		g++ -c $<

Vec3_test: Vec3_test.o Vec3.o
		g++ $^ && ./a.out

clean:
		rm -rf *.o *.out
