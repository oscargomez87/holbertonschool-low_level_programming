/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: pointer to function that takes a pointer
 * to a string and prints it
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
