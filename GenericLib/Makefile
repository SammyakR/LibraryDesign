# first run make libdll.a before make 

TARGET: exe
libdll.a : dll.o
	ar rs libdll.a dll.o

dll.o : dll.c
	gcc -g -c -I . dll.c -o dll.o

exe : app.o dll.o
	gcc -g app.o -o exe -L . -ldll
app.o : app.c
	gcc -g -c -I . app.c -o app.o

clean:
	rm *.o
	rm libdll.a
	rm exe
