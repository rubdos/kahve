CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=coffee.c drink.c fill.c wait.c
OBJECTS=$(SOURCES:.c=.o)
	EXECUTABLE=coffee

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	    $(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	    $(CC) $(CFLAGS) $< -o $@
