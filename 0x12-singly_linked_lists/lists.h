#ifndef __LISTS_H__
#define __LISTS_H__
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - sinlgy linked list
 *
 * @str: string of malloc
 *
 * @len: the len of the string
 *
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


size_t print_list(const list_t *h);

#endif
