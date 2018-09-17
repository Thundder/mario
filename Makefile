SRC=jeu.c
BIN=jeu


$(BIN): $(SRC)
	gcc -g -std=c99 $(SRC) `sdl-config --cflags --libs` -lm -o $(BIN)

clean:
	rm -f $(BIN)
