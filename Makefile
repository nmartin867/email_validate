CC=g++
CFLAGS=-I /usr/local/include
LIBS=-L /usr/local/lib
LINK=-lboost_regex 

validate: validate.cpp
	$(CC) $(CFLAGS) $(LIBS) validate.cpp $(LINK) -o validate 	