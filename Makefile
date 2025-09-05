CXX := g++
CXXFLAGS := -std=c++17 -O2 -Wall -Wextra -Iinclude

SRC := $(wildcard src/*.cpp)
OBJ := $(SRC:.cpp=.o)
BIN := math_program

all: $(BIN)

$(BIN): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BIN)

.PHONY: all clean
