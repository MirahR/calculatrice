CC = gcc
CFLAGS = -Wall -O2
SOURCE = main.c addition.c soustraction.c multiplication.c division.c
TARGET = calcul
SOURCETEST = test.c addition.c soustraction.c multiplication.c division.c
TARGETTEST = testcalcul

build: main.c 
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGETTEST) $(SOURCETEST)

run:
	./$(TARGET)

test: 
	./testcalcul

deploy:
	mkdir -p deploi
	mv $(TARGET) deploi
 