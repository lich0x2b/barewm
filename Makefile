PREFIX?=/usr
CFLAGS?=-Os -Wall

all:
	$(CC) $(CFLAGS) -I$(PREFIX)/include -L$(PREFIX)/lib -lX11 -o barewm barewm.c
install: barewm
	install -s barewm $(PREFIX)/bin
clean:
	rm -f barewm

