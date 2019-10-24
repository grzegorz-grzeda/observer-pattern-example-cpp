PROJ = observer-pattern-example-cpp

SRC = \
	main.cpp
	
INC_DIR = \
	.

COMPILE_FLAGS = \

LINK_FLAGS = \

COMPILER = g++
LINKER = g++

INCLUDES = $(patsubst %,-I%,$(INC_DIR))

OBJ = $(patsubst %.cpp, %.o, $(SRC))

%.o : %.c
	$(COMPILER) $(COMPILE_FLAGS) $(INCLUDES) -c $< -o $@

build: $(OBJ)
	$(LINKER) $(LINK_FLAGS) $(OBJ) -o $(PROJ).exe

clean:
	rm -f *.o
	rm -f *.exe