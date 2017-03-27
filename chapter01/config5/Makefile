## Created  by  xiaohai
## E-mail : xiaohaijin@outlook.com

EXE=config5.exe
OBJS=config5.o
CC=g++
CFLAGE= -Wall -g -std=c++11

$(EXE):$(OBJS)
	$(CC) $(OBJS) -o $(EXE)

$(OBJS):config5.cpp    ;      $(CC) $(CFLAGE) -c config5.cpp

.PHONY:clean
clean:
	-rm $(OBJS) $(EXE)
