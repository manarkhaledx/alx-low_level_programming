#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
int _putchar(char xc);
char *_memcpy(char *mem, char *mcp, unsigned int num);
char *_strchr(char *inputt, char charr);
unsigned int _strspn(char *xr, char *acc);
char *_strpbrk(char *si, char *acc);
char *_strstr(char *hay, char *need);
void print_chessboard(char (*arr)[8]);
void print_diagsums(int *xx, int s);
void set_string(char **sx, char *tor);
#endif

