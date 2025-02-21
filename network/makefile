CC = gcc


default: server.exe

server.exe: 
	$(CC) ./server/server.c -o ./bin/server.exe -liphlpapi -lws2_32

run-server:
	./bin/server.exe
