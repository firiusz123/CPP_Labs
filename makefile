# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinc # -Iinc links header file so i dont have to write everywhere /inc/....  

OUTPUT = program

SRC = src/main.cpp src/character.cpp src/assassin.cpp src/mage.cpp src/animal.cpp src/dog.cpp src/cat.cpp src/russianroulette.cpp
OBJ = $(patsubst src/%.cpp,obj/%.o,$(SRC))

# Default target
all: $(OUTPUT)

# Link object files to create final executable
$(OUTPUT): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

# Compile source files to object files in obj/
obj/%.o: src/%.cpp
	@mkdir -p obj
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJ) $(OUTPUT)

# Run the program
run: $(OUTPUT)
	./$(OUTPUT)
