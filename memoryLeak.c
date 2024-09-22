#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
} st_node;

st_node *create_node(int value); //ok
int is_empty(st_node *root); //ok
int search_node(st_node* root, int value); //ok
int length_node(st_node *root); //ok
void insert_node_list(st_node **root, st_node *new_node); //ok
void delete_node_list(st_node **root, int value); //ok
void free_memory_node(st_node *root); //ok

st_node *create_node(int value)
{
	st_node *new_node = (st_node *)malloc(sizeof(st_node));

	if(new_node == NULL) //handleing heap error
	{
		printf("Unable to allocated memory");
		exit (EXIT_FAILURE);
	}

	new_node->data = value;
	new_node->next = NULL;
	return (new_node);
}

int is_empty(st_node *root)
{
	return (root == NULL);
}

int search_node(st_node *root, int value)
{
	if(is_empty(root))
	{
		printf("Empty list");
		exit (EXIT_FAILURE);
	}
	st_node *tmp = root;
	while(tmp != NULL)
	{
		if(tmp->data == value)
		{
			printf("found!");
			return 0;
		}
		tmp = tmp->next;
	}
	printf("not found!");
	return 1;
}

int length_node(st_node *root)
{
	if(is_empty(root))
	{
		printf("Empty list");
		exit (EXIT_FAILURE);
	}
	st_node *tmp = root;
	int node_size = 0;
	while(tmp != NULL)
	{
		node_size++;
		tmp = tmp->next;
	}
	return node_size;
}

void insert_node_list(st_node **root, st_node *new_node)
{
	new_node->next = *root;
	*root = new_node;
	return;
}

void delete_node_list(st_node **root, int value)
{
	if(is_empty(*root))
	{
		printf("list underflow");
		return;
	}
	
	st_node *tmp = *root;

	if((*root)->data == value)
	{
		*root = (*root)->next;
		free(tmp);
		return; 
	}
	while(tmp != NULL)
	{
		if(tmp->next->data == value)
		{
			st_node *crr = tmp->next;
			tmp->next = tmp->next->next;
			free(crr);
			return;
		}
		tmp = tmp->next;
	}
}

void free_memory_node(st_node *root)
{
	if(is_empty(root)){
		free(root);
		return;
	}
	st_node *tmp = root;
	while(root != NULL)
	{
		tmp = root;
		root = root->next;
		free(tmp);
	}
}

void show_node_list(st_node *list)
{
	if(is_empty(list))
	{
		printf("Empty list");
	}
	while(list != NULL)
	{
		printf("%d ", list->data);
		list = list->next;
	}
}


int main(void)
{
	st_node *root = NULL;
	insert_node_list(&root, create_node(10));
	insert_node_list(&root, create_node(20));
	insert_node_list(&root, create_node(30));
	insert_node_list(&root, create_node(40));
	printf("node size: %d", length_node(root));
	printf("\n");
	show_node_list(root);
	printf("\n");
	search_node(root, 30);
	search_node(root, 35);
	delete_node_list(&root, 30);
	printf("\n");
	delete_node_list(&root, 10);
	show_node_list(root);
	free_memory_node(root);
	return 0;
}