SRC = Vec3.cpp util.cpp Image.cpp
OBJ = $(SRC:%.cpp=%.o)
CFLAGS = -g -std=c++14

main: main.o $(OBJ)
		g++ $^

#Image.o: Vec3.o util.o
#		rm -f Image.o && g++ -c Image.cpp -o tmp.o && ar rvs Image.o tmp.o $^ 

.cpp.o:
		g++ -c $<

Vec3_test: Vec3_test.o Vec3.o util.o
		g++ $^ && ./a.out

util_test: util_test.o util.o Vec3.o
		g++ $^ && ./a.out

#Image_test: Image_test.o Image.o Vec3.o util.o
#		g++ $^ && ./a.out

Image_test : Image_test.o $(OBJ)
		g++ $^ && ./a.out > tmp.ppm

clean:
		rm -rf *.o *.out *.ppm *.png