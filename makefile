main: Main.o Stark.o Lannister.o Targaryen.o
	g++ Main.o Stark.o Lannister.o Targaryen.o -o a

main: Main.cpp Stark.h Lannister.h Targaryen.h
	g++ -c Main.cpp Stark.cpp Lannister.cpp Targaryen.cpp Noble.cpp Guardia.cpp Dothraki.cpp Dragon.cpp -o a

main: Stark.cpp Stark.h
	g++ -c Stark.cpp

main: Lannister.cpp Lannister.h
	g++ -c Lannister.cpp

main: Targaryen.cpp Targaryen.h
	g++ -c Targaryen.cpp

main: Noble.cpp Noble.h
	g++ -c Noble.cpp

main: Guardia.cpp Guardia.h
	g++ -c Guardia.cpp

main: Dothraki.cpp Dothraki.h
	g++ -c Dothraki.cpp

main: Dragon.cpp Dragon.h
	g++ -c Dragon.cpp

