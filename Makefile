all: specific_defs

specific_defs: specific_defs.c
	gcc -Wall -o $@ $<

clean:
	rm -rf specific_defs

