#include "function_pointers.h"

/**
  *print_name - prints name.
  *@name: pointer to name.
  *@f: pointer to func.
  *
  *Return: void.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name || f)
		f(name);
}
