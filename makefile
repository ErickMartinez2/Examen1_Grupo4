Main: Main.o Stark.o Lannister.o Targaryen.o Noble.o Guardia.o Dothraki.o Dragon.o
	g++ Main.o Stark.o Lannister.o Targaryen.o Noble.o Guardia.o Dothraki.o Dragon.o -lncurses -o a

Main.o: Main.cpp Stark.h Lannister.h Targaryen.h Noble.h Guardia.h Dothraki.h Dragon.h
	g++ -c Main.cpp Stark.cpp Lannister.cpp Targaryen.cpp Noble.cpp Guardia.cpp Dothraki.cpp Dragon.cpp

Stark.o: Stark.cpp Stark.h
	g++ -c Stark.cpp

Lannister.o: Lannister.cpp Lannister.h
	g++ -c Lannister.cpp

Targaryen.o: Targaryen.cpp Targaryen.h
	g++ -c Targaryen.cpp

Noble.o: Noble.cpp Noble.h
	g++ -c Noble.cpp

Guardia.o: Guardia.cpp Guardia.h
	g++ -c Guardia.cpp

Dothraki.o: Dothraki.cpp Dothraki.h
	g++ -c Dothraki.cpp

Drago.o: Dragon.cpp Dragon.h
	g++ -c Dragon.cpp

