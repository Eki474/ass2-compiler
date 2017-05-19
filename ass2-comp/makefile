CC=g++
CFLAGS=-std=c++11 -g

IDIR=./include
SDIR=./src

DEPS=$(IDIR)/*.h
SRCS=$(SDIR)/*.cc

comp: lex.yy.c binary.tab.o $(SRCS) $(DEPS)
	$(CC) $(CFLAGS) -ocomp $^
binary.tab.o: binary.tab.cc
	$(CC) $(CFLAGS) -c binary.tab.cc
binary.tab.cc: binary.yy 
	bison binary.yy 
lex.yy.c: binary.ll binary.tab.cc 
	flex binary.ll
clean:
	rm -f binary.tab.* lex.yy.c* comp target.cc