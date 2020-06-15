CC = gcc
CFLAGS = -g -Wall -O2 -I../include/
LDFLAGS = -lm
RM = rm

test : cesar.o main.o
	$(CC) -o test $(LDFLAGS) main.o cesar.o

%.o : %.c
	$(CC) -c $(CFLAGS) $<

all : test

clean :
	$(RM) *.o

clear :
	clear

tar :
	$(RM) test
	tar -cvf ../Exercice6_AGUILAR.tar ../Exercice6_AGUILAR/
	gzip ../Exercice6_AGUILAR.tar
	cp ../Exercice6_AGUILAR.tar.gz /mnt/c/Users/aguil/Desktop/
