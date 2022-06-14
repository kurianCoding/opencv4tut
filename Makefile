CC=c++
FLAGS=$(shell pkg-config --cflags --libs opencv4)
STD=--std=c++11
OUT=$(HOME)/bin

.cpp .o:
	$(CC) $< $(FLAGS)  $(STD) -o $(OUT)/$(@)
