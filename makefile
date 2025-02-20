CC = clang


default: lab.exe

lab.exe: 
	$(CC) ./lab.c -o ./bin/lab.exe

run:
	./bin/lab.exe


clean:
	erase -f .\bin\*.o