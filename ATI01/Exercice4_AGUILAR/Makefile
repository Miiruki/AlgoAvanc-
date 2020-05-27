CC = gcc
CFLAGS = -g -Wall -O2 -I../include/
LDFLAGS = -lm
RM = rm

test : maj.o main.o
	$(CC) -o test $(LDFLAGS) main.o maj.o

%.o : %.c
	$(CC) -c $(CFLAGS) $<

all : test

clean :
	$(RM) *.o

clear :
	clear

tar :
	$(RM) test
	tar -cvf ../Exercice4_AGUILAR.tar ../Exercice4_AGUILAR/
	gzip ../Exercice4_AGUILAR.tar
	cp ../Exercice4_AGUILAR.tar.gz /mnt/c/Users/aguil/Desktop/
