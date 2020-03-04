CC = gcc
CFLAGS = -g -Wall -O2
LDFLAGS = -lm
RM = rm

test : replace.o main.o
	$(CC) -o test $(LDFLAGS) main.o replace.o

%.o : %.c
	$(CC) -c $(CFLAGS) $<

all : test

clean :
	$(RM) *.o

clear :
	clear

tar :
	$(RM) test
	tar -cvf ../Exercice2_AGUILAR.tar ../Exercice2_AGUILAR/
	gzip ../Exercice2_AGUILAR.tar
	cp ../Exercice2_AGUILAR.tar.gz /mnt/c/Users/aguil/Desktop/
