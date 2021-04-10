OBJ = score.o eval.o classify.o output.o getscore.o
	APPNAME = score
$(APPNAME):$(OBJ)#forlinking
	gcc -o $(APPNAME) $(OBJ)
%.o : %.c #for compiling rule,for each.c file in the folder
	gcc -g -c -o $@ $<
clean:
	rm $(OBJ) $(APPNAME)
