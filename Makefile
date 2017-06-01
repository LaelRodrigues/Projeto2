RM = rm -rf 

CC=g++ 

LIB_DIR=lib
INC_DIR=include
SRC_DIR=src
OBJ_DIR=build
BIN_DIR=bin
DOC_DIR=doc
TEST_DIR=test
 
CFLAGS=-Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

.PHONY: all init clean debug doxy doc

all: init teste

debug: CFLAGS += -g -O0
debug: all teste

init:
	@mkdir -p $(BIN_DIR)/
	@mkdir -p $(OBJ_DIR)/

teste: $(OBJ_DIR)/produto.o $(OBJ_DIR)/bebida.o $(OBJ_DIR)/fruta.o $(OBJ_DIR)/salgado.o $(OBJ_DIR)/main.o 
	@echo "-----------------"
	@echo "Alvo $@"
	@echo "------------------"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/teste $^
	@echo "+++ [Executavel teste criado em $(BIN_DIR)] +++"
	@echo "--------------"

$(OBJ_DIR)/produto.o: $(SRC_DIR)/produto.cpp $(INC_DIR)/produto.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/bebida.o: $(SRC_DIR)/bebida.cpp $(INC_DIR)/bebida.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/fruta.o: $(SRC_DIR)/fruta.cpp $(INC_DIR)/fruta.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/salgado.o: $(SRC_DIR)/salgado.cpp $(INC_DIR)/salgado.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

doxy:
	doxygen -g

doc:
	$(RM) $(DOC_DIR)/*
	doxygen

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
