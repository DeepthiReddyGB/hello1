all: min.exe,su.exe

min.exe,su.exe: min.o
	 gcc -o min.exe min.o

min.o: min.c
	 gcc -c min.c
     
clean:
	 rm min.o min.exe
	 