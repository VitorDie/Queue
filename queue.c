#include "queue.h"

#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    node_t *head;
    node_t *last;
};

queue_t *create_queue()
{
    queue_t *new_queue = malloc(sizeof(queue_t));

    new_queue->size = 0;
    new_queue->head = NULL;

    return new_queue;
}

void queue_enqueue(node_t *node, queue_t *queue)
{
    if(0 == queue->size)
    {
        queue->head = node;
        queue->last = queue->head;
        queue->size++;
    }
    else
    {
        node_set_next_node(node, queue->last);
        queue->last = node;
        queue->size++;
    }
}

void queue_dequeue(queue_t *queue)
{
    if(0 == queue->size)
    {
        return;
    }

    node_t *free_it = queue->head;

    queue->head = node_get_next_node(queue->head);
    queue->size--;

    free(free_it);
}

int queue_size(queue_t *queue)
{
    return queue->size;
}

node_t *queue_head(queue_t *queue)
{
    return queue->head;
}