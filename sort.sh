#!/bin/sh
CC=gcc
rm -rf *.o main
$CC -c main.c -o main.o
$CC -c insertion.c -o insertion.o
$CC -c bubble.c -o bubble.o
$CC -c selection.c -o selection.o
$CC -c quick.c -o quick.o
$CC -c merge.c -o merge.o
$CC main.o insertion.o bubble.o selection.o quick.o  merge.o -o main

echo "bubble sort"
/home/narayana/Git/sorting/main 0 1 2 3 4 5 6 7 8 9 10
/home/narayana/Git/sorting/main 0 10 9 8 7 6 5 4 3 2 1
/home/narayana/Git/sorting/main 0 0
/home/narayana/Git/sorting/main 0 1 1 1 1 1 1 1 1 1 1
/home/narayana/Git/sorting/main 0 34 65 3 76 44 90 43 21 54 75
/home/narayana/Git/sorting/main 0 -2 -4 5 33 56 -54 23 -44 -4 7
echo "selection sort"
/home/narayana/Git/sorting/main 1 1 2 3 4 5 6 7 8 9 10
/home/narayana/Git/sorting/main 1 10 9 8 7 6 5 4 3 2 1
/home/narayana/Git/sorting/main 1 0
/home/narayana/Git/sorting/main 1 1 1 1 1 1 1 1 1 1 1
/home/narayana/Git/sorting/main 1 34 65 3 76 44 90 43 21 54 75
/home/narayana/Git/sorting/main 1 -2 -4 5 33 56 -54 23 -44 -4 7
echo "insertion sort"
/home/narayana/Git/sorting/main 2 1 2 3 4 5 6 7 8 9 10
/home/narayana/Git/sorting/main 2 10 9 8 7 6 5 4 3 2 1
/home/narayana/Git/sorting/main 2 0
/home/narayana/Git/sorting/main 2 1 1 1 1 1 1 1 1 1 1
/home/narayana/Git/sorting/main 2 34 65 3 76 44 90 43 21 54 75
/home/narayana/Git/sorting/main 2 -2 -4 5 33 56 -54 23 -44 -4 7
echo "merge sort"
/home/narayana/Git/sorting/main 3 1 2 3 4 5 6 7 8 9 10
/home/narayana/Git/sorting/main 3 10 9 8 7 6 5 4 3 2 1
/home/narayana/Git/sorting/main 3 0
/home/narayana/Git/sorting/main 3 1 1 1 1 1 1 1 1 1 1
/home/narayana/Git/sorting/main 3 34 65 3 76 44 90 43 21 54 75
/home/narayana/Git/sorting/main 3 -2 -4 5 33 56 -54 23 -44 -4 7
echo "quick sort"
/home/narayana/Git/sorting/main 4 1 2 3 4 5 6 7 8 9 10
/home/narayana/Git/sorting/main 4 10 9 8 7 6 5 4 3 2 1
/home/narayana/Git/sorting/main 4 0
/home/narayana/Git/sorting/main 4 1 1 1 1 1 1 1 1 1 1
/home/narayana/Git/sorting/main 4 34 65 3 76 44 90 43 21 54 75
/home/narayana/Git/sorting/main 4 -2 -4 5 33 56 -54 23 -44 -4 7
