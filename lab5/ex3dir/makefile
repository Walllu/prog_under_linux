CC=gcc # chosen compiler to user in compilation commands
CCFLAGS=-Wall # compiler flags
LIBS=-lm # library tags, used to link libraries

mycode: main.o complexmath.o validate.o	
	$(CC) $(CCFLAGS) -o $@ $^ $(LIBS) # link object files and make program "mycode"

%.o : %.c
	$(CC) $(CCFLAGS) -c $^ # compile all object files
# make sure that the clean command and run even if a directory exists called "clean"
.PHONY: clean
# a command that removes all object files
clean:
	rm -f *.o mycode

