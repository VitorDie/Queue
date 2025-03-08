#include "node.h"
#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int value;
    struct node *next_node;
} node; 


node_t *create_node(int value)
{
    node_t *new_node = malloc(sizeof(node_t));

    new_node->value = value;
    new_node->next_node = NULL;

    return new_node;
}

void node_set_value(int value, node_t *node)
{
    node->value = value;
}

void node_set_next_node(node_t *next_node, node_t *node)
{
    node->next_node = next_node;
}

int node_get_value(node_t *node)
{
    return node->value;
}

node_t *node_get_next_node(node_t *node)
{
    return node->next_node;
}