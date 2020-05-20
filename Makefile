all:sum

sum :sum.c
			 gcc -Wpedantic -ansi -Wall -o sum sum.c

test:sum
		 	 ./sum

clean: 
			 rm -f sum
		 