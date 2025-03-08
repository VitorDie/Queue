#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

typedef struct queue queue_t;
queue_t *create_queue();
void queue_enqueue(node_t *node, queue_t *queue);
int queue_size(queue_t *queue);
node_t *queue_head(queue_t *queue);
void queue_dequeue(queue_t *queue);

#endif