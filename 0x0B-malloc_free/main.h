main.h

#ifndef MAIN_H
#define MAIN_H

char *create_arrayx(unsigned int sizex, char cx);
int _putcharx(char cx);
char *_strdupx(char *strx);
char *str_concatx(char *s1x, char *s2x);
int **alloc_gridx(int widthx, int heightx);
void free_gridx(int **gridx, int heightx);
char *argstostrx(int acx, char **avx);

#endif
