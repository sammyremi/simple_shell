#ifndef SHELL_H
#define SHELL_H

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <sys/stat.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/errno.h>

extern char **environ;

/**
 * struct path_list - singly linked list for the path
 * @nod: pointer to path value
 * @link: pointer to the next node
 */
typedef struct path_list
{
	char *d_path;
	struct path_list *link;
} path_l;

unsigned int a_toi(char *c);
char *get_env(const char *buf);
int is_alpha(char s);
int is_digit(char s);
void *_realloc(void *ptr, unsigned int o_size, unsigned int n_size);
int _strcmp(char *s1, char *s2);
int _strlen(const char *str);
path_l *add_node_end(path_l **head, char *inp);
void free_list_path(path_l *head);
path_l *_linkedpath(void);
size_t wordcount(char *inp, char ch);
char **words_allocate(char *inp, size_t *num, size_t status);
ssize_t check_builtin(char **inp, char *buf, path_l *, ssize_t *);
int _checkpath(char **exec, path_l *link_path, char *inp, size_t num, ssize_t *status);
int func_exec(char *exec, char **inp, ssize_t flag);
size_t err(size_t h, char *av, char **inp, char **s_count, int flag);
char **wordcheck(char **ptr, size_t *num, size_t status);
char *string_del(char **ptr, size_t a, size_t *num);
char *string_realloc(char **ptr, size_t a, size_t b, char *var, size_t len_var);
char *str_cat(char *s1, char *s2);
int select_strlen(char *str, char ch);
char *realloc_specialnum(size_t num, char **ptr, size_t a, size_t b);
ssize_t exit_builtin(char **inp, char *buf, path_l *h_path, ssize_t *status);
ssize_t printenv(void);
ssize_t help_builtin(char **inp);
ssize_t setenv_builtin(char **inp, ssize_t *status);
ssize_t unsetenv_builtin(char **inp, ssize_t *status);
ssize_t cd_builtin(char **inp, ssize_t *status);
size_t printnum(size_t num, char *buf, size_t count);
void helpexit(void);
void helpenv(void);
void helphelp(void);
void helpsetenv(void);
void helpunsetenv(void);
void helpcd(void);
void help(void);
void signal_handler(int signal __attribute__((unused)));
#endif
