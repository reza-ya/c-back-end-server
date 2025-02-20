CC = gcc


default: lab.exe

lab.exe: 
	$(CC) ./lab.c -o ./bin/lab.exe -liphlpapi -lws2_32

run:
	./bin/lab.exe


clean:
	erase -f .\bin\*.o