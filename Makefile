CC=gcc
CFLAGS=-Wall -O2
SRC=main.c utils.c bubble_sort.c selection_sort.c insertion_sort.c merge_sort.c quick_sort.c

sort: $(SRC)
	$(CC) $(CFLAGS) -o sort $(SRC)

clean:
	rm -f sort
