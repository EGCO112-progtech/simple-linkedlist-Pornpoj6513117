compile: main.c 
	 gcc main.c -o ming

run: ming
	 ./ming

clean: ming
	 rm ming
