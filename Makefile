all: gcc gpp
gcc: specific_defs-gcc
gpp: specific_defs-gpp

specific_defs-gcc: specific_defs.c
	gcc -Wall -o $@ $<

specific_defs-gpp: specific_defs.c
	g++ -Wall -o $@ $<

clean:
	rm -rf specific_defs-gcc specific_defs-gpp

