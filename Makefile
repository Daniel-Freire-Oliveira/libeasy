FILES		= ./src/main.c ./src/libeasy/sys_call.s
FLAGS		=  -s -O2 -nostdlib -o
SOURCE		= ./test

all: msg
	gcc $(FILES) $(FLAGS) $(SOURCE)/main


msg:
	@echo Building your files :")"

remove:
	rm  $(SOURCE)/*
