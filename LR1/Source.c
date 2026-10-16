#include <locale.h>
#include <stdio.h>

int main(void)
{
	setlocale(LC_ALL, "RUS");
	zad1();
	zad2();
	zad3();
}

int zad1(void)
{
	puts("Моя программа");
	getchar();
	return 0;
}

int zad2(void)
{
	puts("************************************************");
	puts("*                                              *");
	puts("* Тема: Разработка консольного приложения      *");
	puts("*                                              *");
	puts("*       Выполнила  Матюхина С.Д                *");
	puts("*                                              *");
	puts("************************************************");
}

int zad3(void)
{
	puts("____  ____  .  ____   ____  ____ ");
	puts("|  |  |__|  |  |  |   |  |  |___ ");
	puts("|__|    / . |  |__| . |__|  |__| ");
}