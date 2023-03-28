#ifndef MAIN_H
#define MAIN_H

/*libraries*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>


typedef struct flags_t {
  const char *format;  /*pointer to the current position in the format string*/
  int width;           /*width of the field, or -1 if not specified*/
  int precision;       /*precision of the field, or -1 if not specified*/
  int flags;           /*bitfield for various formatting options*/
} flags_t;


#define PLUS 1
#define SPACE 2
#define ZERO 4

#define FLAG_MINUS 1
#define FLAG_PLUS 2
#define FLAG_SPACE 4
#define FLAG_HASH 8
#define FLAG_ZERO 16



/*prototypes*/
int _putchar(char c);
int _printf(const char *format, ...);
/*void _printd(unsigned int n, int base);*/
/*void _printd(unsigned int n, int base, char specifier);*/
int _printoct(unsigned int n, int flags, int width, int precision);
int _printuint(unsigned int n, int flags, int width, int precision);
int _printint(int n, int flags, int width, int precision);
/*int _printstr(char *str, int flags, int width, int precision);*/
int _printstr(char *str, int width, int precision);
int _printhex(unsigned int n, int uppercase, int flags, int width, int precision);
int get_precision(flags_t *flags, va_list arg);
int get_field_width(flags_t *flags, va_list arg);
/*void handle_flags(char specifier, flags_t *flags, va_list arg);*/
int handle_flags(const char **format);
int handle_width(const char **format, va_list arg);
char handle_length(const char **format);
int handle_precision(const char **format, va_list arg);
int _numlen(int n);
int _unumlen(unsigned int n);
/*void _printud(unsigned int n, int precision);*/
void _printud(unsigned int n, int base, int precision);
int _printrev(char *str);
int _atoi(const char *s);
int handle_b(const char **format, va_list arg);
int _printbin(unsigned int n, int width);
int _printstr_nonprint(char *str, int width, int precision);
int _print_hex(unsigned int n, int capital);
int _print_pointer(void *ptr);



void _printd(unsigned int n, int base, int is_unsigned);
void _print_unsigned(unsigned int n);
void _print_octal(unsigned int n);
/*void _print_hex(unsigned int n, int capital);*/
void sprintf_hex(char *out, char ch);
void _puts(char *str);
void _printp(void *ptr);
/*int handle_flags(const char *format, int *flags);*/
int _print_rot13(char *str);
int _print_rev(char *str);
int _strlen(char *str);


#endif
