#include "lists.h"

/**
 * print_list - function print element in list_t
 * @h: pointer to list_t struct
 *
 * Return: unsinged intger number or size of list
*/
size_t print_list(const list_t *h)
{
	int i = 0;
	unsigned int n = 0;
    
	while(h != NULL)
	{
		if (h->str == NULL)
			printf("[0] %s\n", h->str);
		else
			printf("[%d] %s\n",h->len, h->str);

		h = h->next;
		n++;
	}
	return(n);
}
