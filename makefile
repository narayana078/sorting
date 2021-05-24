i1=1 2 3 4 5 6 7 8 9 10
i2=10 9 8 7 6 5 4 3 2 1
i3=0
i4=1 1 1 1 1 1 1 1 1 1  
i5=34 65 3 76 44 90 43 21 54 75
i6=-2 -4 5 33 56 -54 23 -44 -4 7
CC=gcc
all:main

main:main.o insertion.o bubble.o selection.o quick.o merge.o
	$(CC) main.o insertion.o bubble.o selection.o quick.o  merge.o -o main
main.o:main.c
	$(CC) -c main.c
insertion.o:insertion.c 
	$(CC) -c insertion.c -o insertion.o
bubble.o:bubble.c
	$(CC) -c bubble.c -o bubble.o
selection.o:selection.c
	$(CC) -c selection.c -o selection.o
quick.o:quick.c
	$(CC) -c quick.c -o quick.o
merge.o:
	$(CC) -c merge.c -o merge.o
clean:
	rm -rf *.o main
bsort:
	@./main 0 $(i1)
	@./main 0 $(i2)
	@./main 0 $(i3)
	@./main 0 $(i4)
	@./main 0 $(i5)
	@./main 0 $(i6)
ssort:
	@./main 1 $(i1)
	@./main 1 $(i2)
	@./main 1 $(i3)
	@./main 1 $(i4)
	@./main 1 $(i5)
	@./main 1 $(i6)
isort:
	@./main 2 $(i1)
	@./main 2 $(i2)
	@./main 2 $(i3)
	@./main 2 $(i4)
	@./main 2 $(i5)
	@./main 3 $(i6)
msort:
	@./main 3 $(i1)
	@./main 3 $(i2)
	@./main 3 $(i3)
	@./main 3 $(i4)
	@./main 3 $(i5)
	@./main 3 $(i6)
qsort:
	@./main 4 $(i1)
	@./main 4 $(i2)
	@./main 4 $(i3)
	@./main 4 $(i4)
	@./main 4 $(i5)
	@./main 4 $(i6)

