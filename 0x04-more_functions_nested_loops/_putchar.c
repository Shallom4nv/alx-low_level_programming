/**
* _putchar - writes the character c to stdout
* 0c: The character to print
* Return 1 if true, 0 if false
* On error, -1 rturn.
*/

int _putchar(char c)

{
	return(write(1, &c, 1));
}
