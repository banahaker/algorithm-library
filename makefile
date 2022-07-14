all:main.c
	gcc main.c -o main
run:
	./main
clean:
	rm -rf ./main