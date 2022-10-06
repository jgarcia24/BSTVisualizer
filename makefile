lab4: driver.o BST.o
	gcc driver.o BST.o -o lab4 -lm

driver.o: driver.c BST.h
	gcc -c driver.c

BST.o: BST.c BST.h
	gcc -c BST.c

clean:
	rm *.o lab4
