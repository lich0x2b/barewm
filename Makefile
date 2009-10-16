PREFIX?=/usr
CFLAGS?=-Os -Wall -std=c99
 
all:
	$(CC) $(CFLAGS) -I$(PREFIX)/include -L$(PREFIX)/lib -lX11 -o barewm barewm.c
install: barewm
	install -sD barewm $(DESTDIR)$(PREFIX)/bin/barewm
clean:
	rm -f barewm
