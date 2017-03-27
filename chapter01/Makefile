## Created  by  xiaohai
## E-mail : xiaohaijin@outlook.com

EXE=config3.exe
OBJS=config3.o
CC=g++
CFLAGE= -Wall -g -std=c++11

$(EXE):$(OBJS)
	$(CC) $(OBJS) -o $(EXE)

$(OBJS):config3.cpp    ;      $(CC) $(CFLAGE) -c config3.cpp

.PHONY:clean
clean:
	-rm $(OBJS) $(EXE)
