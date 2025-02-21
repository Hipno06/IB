
# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica 2024-2025
#
# @date.cc
# @author García Pérez, Víctor
# @date dic 13, 2024
# @brief A Makefile example for simple C++ programs
# 

CXX = g++
CXXFLAGS = -std=c++17 -Wall -g
TARGET = date  # Cambia el nombre del ejecutable según lo necesites

# Todos los archivos .cc en el directorio actual
SRC = $(wildcard *.cc)
OBJ = $(SRC:.cc=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) -o $(TARGET) $(OBJ)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

