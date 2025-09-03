# using g++ as the compiler
CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17  # warnings + C++17 standard

# all the object files and the final program name
OBJS := Animal.o AnimalsInZoo.o zoo.o
TARGET := zoo

# default target (runs when you just type "make")
all: $(TARGET)

# link everything into the final program
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# how to build Animal.o
Animal.o: Animal.cpp Animal.h
	$(CXX) $(CXXFLAGS) -c Animal.cpp

# how to build AnimalsInZoo.o
AnimalsInZoo.o: AnimalsInZoo.cpp AnimalsInZoo.h Animal.h
	$(CXX) $(CXXFLAGS) -c AnimalsInZoo.cpp

# how to build zoo.o (main file)
zoo.o: zoo.cpp Animal.h AnimalsInZoo.h
	$(CXX) $(CXXFLAGS) -c zoo.cpp

# clean up compiled stuff so we can rebuild fresh
clean:
	rm -f *.o $(TARGET)

# make sure these aren’t treated as files
.PHONY: all clean
