CC=g++
# To disable asserts, add -NDEBUG to CPP_FLAGS
CPP_FLAGS=-Og -g
EXEC=main
SRC=$(EXEC).cpp

$(EXEC): $(SRC)
	g++ $(SRC) -o $(EXEC) $(CPP_FLAGS)

clean:
	rm $(EXEC) 
