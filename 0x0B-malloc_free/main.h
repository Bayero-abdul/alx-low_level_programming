#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int _strlen(char *s);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int sum_len_of_strings(int n, char **arr);
char **strtow(char *str);
int get_len_word(int *index, char *str);
int count_words(char *s);
char *get_word(int *index, char *str);

#endif



