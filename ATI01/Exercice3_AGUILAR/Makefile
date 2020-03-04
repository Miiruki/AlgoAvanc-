CC = gcc
CFLAGS = -g -Wall -O2
LDFLAGS = -lm
RM = rm

test : replace_arg.o main.o
	$(CC) -o test $(LDFLAGS) main.o replace_arg.o

%.o : %.c
	$(CC) -c $(CFLAGS) $<

all : test

clean :
	$(RM) *.o

clear :
	clear

tar :
	tar -cvf ../Exercice3_AGUILAR.tar ../Exercice3_AGUILAR/
	gzip ../Exercice3_AGUILAR.tar
	cp ../Exercice3_AGUILAR.tar.gz /mnt/c/Users/aguil/Desktop/
