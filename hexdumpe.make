
CC     = gcc
EXE    = hexdumpe
CFLAGS = -Wall -O2
LFLAGS =

HEXDUMPE_HEADER_FILES = \
  stdafx.h              \
  typedefs.h            \
  hexdumpe.h

HEXDUMPE_SOURCE_FILES = \
  main.c                \
  hexdumpe.c

ALL_OTHER_FILES =       \
  hexdumpe.make         \
  README.txt

ALL_HEADER_FILES  = $(HEXDUMPE_HEADER_FILES)
ALL_SOURCE_FILES  = $(HEXDUMPE_SOURCE_FILES)
ALL_FILES         = $(ALL_HEADER_FILES) $(ALL_SOURCE_FILES) $(ALL_OTHER_FILES)

HEXDUMPE_OBJECT_FILES = $(HEXDUMPE_SOURCE_FILES:.c=.o)

all: $(EXE)

$(EXE): $(ALL_FILES) $(HEXDUMPE_OBJECT_FILES)
	$(CC) $(LFLAGS)    $(HEXDUMPE_OBJECT_FILES) -o $(EXE)

$(HEXDUMPE_OBJECT_FILES): $(HEXDUMPE_SOURCE_FILES)
	$(CC) $(CFLAGS) -I. -c $*.c -o $@

clean:
	rm -rf $(HEXDUMPE_OBJECT_FILES) $(EXE)

$(ALL_OTHER_FILES):

