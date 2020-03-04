CC = gcc
CFLAGS = -g -Wall -O2
LDFLAGS = -lm
RM = rm

test : chain_long.o main.o
	$(CC) -o test $(LDFLAGS) main.o chain_long.o

%.o : %.c
	$(CC) -c $(CFLAGS) $<

all : test

clean :
	$(RM) *.o

clear :
	clear

tar :
	$(RM) test
	tar -cvf ../Exercice1_AGUILAR.tar ../Exercice1_AGUILAR/
	gzip ../Exercice1_AGUILAR.tar
	cp ../Exercice1_AGUILAR.tar.gz /mnt/c/Users/aguil/Desktop/
