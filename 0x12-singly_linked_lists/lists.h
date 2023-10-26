#ifndef HEADER_FILES
#define HEADER_FILES


/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;


int _putchar(char c);
size_t print_list(const list_t *h);
#endif
