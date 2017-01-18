all: main.cpp
	g++ -c main.cpp
	g++ main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm -f sfml-app
	rm -f main.o


