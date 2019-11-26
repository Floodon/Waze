CC = g++
CFLAGS = -Wall
EXE = Waze
OFILES = Waze.o \
		 Trajet.o \
		 Catalogue.o \
		 TableauDynamique.o \
		 TrajetSimple.o
		 ###TrajetCompose.o \###

### BUT ###

but: ${EXE}

### REGLES ###

Waze.o: Catalogue.h Trajet.h

Trajet.o:

TrajetSimple:

Catalogue.o: Trajet.h

TableauDynamique.o: Trajet.h

${EXE}: ${OFILES}
		$(CC) $(CFLAGS) -o ${EXE} ${OFILES}



