#ifndef _MAIN_
#define _MAIN_

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int p);
int _putchar(char ch);
int get_bit(unsigned long int p, unsigned int index);
int _set_bit(unsigned long int *p, unsigned int index);
int _clear_bit(unsigned long int *p, unsigned int index);
unsigned int flip_bits(unsigned long int p, unsigned long int a);
int get_endianness(void);

#endif
