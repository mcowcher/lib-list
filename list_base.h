// base class for bothe singly and doubly linked lists

#ifndef LIST_BASE_H
#define LIST_BASE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list_node_t {
	void* data;
	struct list_node_t* prev;
	struct list_node_t* next;
}

struct list_t {
	int count;
	struct list_node_t* head;
	struct list_node_t* tail;
	size_t data_size;
}


list_t			lst_new_list(size_t t_data_size);
list_node_t*	lst_new_node(void* data, size_t data_size);
void			free_node(list_node_t* node);
void			free_list(list);

int				list_append(void* data, list_node_t*)


#endif
