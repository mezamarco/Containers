all: containerExe

containerExe: containers.cpp
	g++ containers.cpp -o containerExe
clean:
	rm *.o *.exe
