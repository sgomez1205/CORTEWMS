all: compilar
compilar: mascota propietario propietarioxMascota sistema main
	g++ -o Salida Mascota.o Propietario.o PropietarioxMascota.o Sistema.o Main.o
mascota: Mascota.cpp Mascota.h
	g++ -c Mascota.cpp
propietario: Propietario.cpp Propietario.h
	g++ -c Propietario.cpp
propietarioxMascota: PropietarioxMascota.cpp Propietario.h Mascota.h
	g++ -c PropietarioxMascota.cpp
sistema: PropietarioxMascota.h Sistema.cpp Sistema.h
	g++ -c Sistema.cpp
main: Main.cpp Sistema.h
	g++ -c main.cpp
clean: #Comando para borrar los o.
	@echo "Cleaning Compilation..."
	del *.o