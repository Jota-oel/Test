CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# nombre del ejecutable final
TARGET = programa

# fuentes y objetos
SRC = main.cpp lib.cpp
OBJ = $(SRC:.cpp=.o)

# regla por defecto
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp lib.h
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)

