all: compilar
compilar: mascota propietario sistema main
	g++ -o Salida Mascota.o Propietario.o Sistema.o Main.o
mascota: Mascota.cpp Mascota.h
	g++ -c Mascota.cpp
propietario: Propietario.cpp Propietario.h
	g++ -c Propietario.cpp
sistema: Sistema.cpp Sistema.h
	g++ -c Sistema.cpp
main: Main.cpp
	g++ -c main.cpp
clean: #Comando para borrar los o.
	@echo "Cleaning Compilation..."
	del *.o