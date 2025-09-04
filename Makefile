homework9: main.o pokemon.o charmander.o pikachu.o squirtle.o
	g++ main.o pokemon.o charmander.o pikachu.o squirtle.o -o homework9

main.o: main.cpp
	g++ -c main.cpp -o main.o

pokemon.o: pokemon.cpp pokemon.h
	g++ -c pokemon.cpp -o pokemon.o

charmander.o: charmander.cpp pokemon.h
	g++ -c charmander.cpp -o charmander.o

pikachu.o: pikachu.cpp pokemon.h
	g++ -c pikachu.cpp -o pikachu.o

squirtle.o: squirtle.cpp pokemon.h
	g++ -c squirtle.cpp -o squirtle.o

clean:
	rm -f main.o pokemon.o charmander.o pikachu.o squirtle.o homework9

