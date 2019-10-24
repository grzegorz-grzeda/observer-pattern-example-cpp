PROJ = observer-pattern-example-cpp

SRC = \
	main.cpp
	
INC_DIR = \
	.

COMPILE_FLAGS = \
	-std=c++11 \

LINK_FLAGS = \
	-std=c++11 \

COMPILER = g++ 
LINKER = g++

INCLUDES = $(patsubst %,-I%,$(INC_DIR))

OBJ = $(patsubst %.cpp, %.o, $(SRC))

%.o : %.cpp
	$(COMPILER) $(COMPILE_FLAGS) $(INCLUDES) -c $< -o $@

build: clean $(OBJ)
	$(LINKER) $(LINK_FLAGS) $(OBJ) -o $(PROJ).exe

clean:
	rm -f *.o
	rm -f *.exe