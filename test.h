#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int printf_pointer(va_list ap);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list ap);
int printf_HEX(va_list ap);
int printf_hex(va_list ap);
int printf_oct(va_list ap);
int printf_unsigned(va_list ap);
int printf_bin(va_list ap);
int printf_srev(va_list ap);
int printf_rot13(va_list ap);
int printf_int(va_list ap);
int printf_dec(va_list ap);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list ap);
int printf_string(va_list ap);
int _putchar(char c);
/**
 * struct format - conversion specifiers for printf
 * @c: the char pointer to specifier
 * @f: function pointer
 */
typedef struct format
{
	char *s;
	int (*f)(va_list);
} conversion_match;

#endif /*main.h for printf*/
