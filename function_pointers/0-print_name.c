#include "function_pointers.h"
#include<stdlib.h>
#include<stdio.h>
/**
*print name - a function that print name
*@name:The name
*@f:Afunction
*/


void print_name(char *name, void (*f)(char *))
{

if (name == NULL || f == NULL)
return;

f(name);
}
