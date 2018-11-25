CC=gcc

all: silnia liczby_1-n tabliczka_mnozenia howto_printf howto_scanf

silnia: silnia.o
	@$(CC) -o $@.exe $^
	@echo "Built silnia"

silnia.o: silnia.c

liczby_1-n: liczby_1-n.o
	@$(CC) -o $@.exe $^
	@echo "Built liczby_1-n"

liczby_1-n.o: liczby_1-n.c

tabliczka_mnozenia: tabliczka_mnozenia.o
	@$(CC) -o $@.exe $^
	@echo "Built tabliczka_mnozenia"

tabliczka_mnozenia.o: tabliczka_mnozenia.c

howto_printf: howto_printf.o
	@$(CC) -o $@.exe $^
	@echo "Built howto_printf"

howto_printf.o: howto_printf.c

howto_scanf: howto_scanf.o
	@$(CC) -o $@.exe $^
	@echo "Built howto_scanf"

howto_scanf.o: howto_scanf.c

clean:
	@$(RM) *.exe *.o
