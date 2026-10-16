#include <locale.h>
#include <stdio.h>

int main(void)
{
	setlocale(LC_ALL, "RUS");
	dz();
}

int dz(void)
{
	puts("  ____________________ ");
	puts(" /                    \\");
	puts("/......................\\");
	puts("|                      |");
	puts("|   ____     ____      |");
	puts("|   |  |     |  |      |");
	puts("|   |__|     |__|      |");
	puts("|                      |");
	puts("|        ___           |");
	puts("|        |_|           |");
	puts("|________|_|___________|");
}