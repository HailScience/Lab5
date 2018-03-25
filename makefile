#makefile

#Makefile
CXX = g++


recursive: main.o menu.o reversePrint.o sum.o triangle.o
	${CXX} main.o menu.o reversePrint.o sum.o triangle.o -o recursive

main.o: main.cpp
	${CXX} -c main.cpp

menu.o: menu.cpp menu.hpp
	${CXX} -c menu.cpp

reversePrint.o: reversePrint.cpp reversePrint.hpp
	${CXX} -c reversePrint.cpp

sum.o: sum.cpp sum.hpp
	${CXX} -c sum.cpp

triangle.o: triangle.cpp triangle.hpp
	${CXX} -c triangle.cpp
clean:
	rm *.o recursive

