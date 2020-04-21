# Govinda KC 1001750264     makefile from coding 4
SRC1 = Code6_1001750264.c
SRC2 = SockLib.c
SRC3 = SortLib.c
SRC4 = DrawerLib.c
SRC5 = DresserLib.c
OBJ1 = $(SRC1:.c=.o)
OBJ2 = $(SRC2:.c=.o)
OBJ3 = $(SRC3:.c=.o)
OBJ4 = $(SRC4:.c=.o)
OBJ5 = $(SRC5:.c=.o)
EXE = $(SRC1:.c=.e)

HFILES = Gamelib.h SockLib.h SortLib.h DrawerLib.h DresserLib.h

CFLAGS = -g
all : $(EXE)
 
$(EXE): $(OBJ1) $(OBJ2)
	gcc $(CFLAGS) $(OBJ1) $(OBJ2) -o $(EXE)

$(OBJ1) : $(SRC1) $(HFILES)
	gcc -c $(CFLAGS) $(SRC1) -o $(OBJ1)

$(OBJ2) : $(SRC2) $(HFILES)
	gcc -c $(CFLAGS) $(SRC2) -o $(OBJ2)

$(OBJ3) : $(SRC3) $(HFILES)
	gcc -c $(CFLAGS) $(SRC3) -o $(OBJ3)

$(OBJ4) : $(SRC4) $(HFILES)
	gcc -c $(CFLAGS) $(SRC4) -o $(OBJ4)

$(OBJ5) : $(SRC5) $(HFILES)
	gcc -c $(CFLAGS) $(SRC5) -o $(OBJ5)



	

