CC = gcc
CFLAGS = -g -Wall -O2 -I../include/
LDFLAGS = -lm
RM = rm

test : mirror.o main.o
	$(CC) -o test $(LDFLAGS) main.o mirror.o

%.o : %.c
	$(CC) -c $(CFLAGS) $<

all : test

clean :
	$(RM) *.o

clear :
	clear

tar :
	$(RM) test
	tar -cvf ../Exercice5_AGUILAR.tar ../Exercice5_AGUILAR/
	gzip ../Exercice5_AGUILAR.tar
	cp ../Exercice5_AGUILAR.tar.gz /mnt/c/Users/aguil/Desktop/
