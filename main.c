#include "node.h"
#include "queue.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void clean_queue(queue_t *queue)
{
    while (queue_size(queue) > 0)
    {
        queue_dequeue(queue);
    }
}

int main()
{
    queue_t *queue = create_queue();

    node_t *n1 = create_node(1);
    queue_enqueue(n1, queue);
    assert(queue_head(queue) == n1);
    assert(queue_size(queue) == 1);
    queue_dequeue(queue);
    assert(queue_size(queue) == 0);
    assert(queue_head(queue) == NULL);

    queue_enqueue(create_node(1), queue);
    queue_enqueue(create_node(2), queue);
    queue_enqueue(create_node(3), queue);

    clean_queue(queue);
    assert(queue_size(queue) == 0);
    assert(queue_head(queue) == NULL);

    free(queue);
    return 0;
}