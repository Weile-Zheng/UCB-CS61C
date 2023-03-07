#include <stddef.h>
#include <stdio.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head)
{
    node *tortoise = head;
    node *hare = head;

    // Check for empty list
    if (head == NULL)
    {
        return 0;
    }
    // If list only has one element
    if (tortoise->next == NULL)
    {
        return 0;
    }

    // Since above proved next is not null, we can safely move hare down next twice without null pointer error.
    tortoise = tortoise->next;
    hare = hare->next->next;

    while (tortoise != NULL && hare != NULL)
    {
        if (tortoise == hare)
        {
            return 1;
        }

        tortoise = tortoise->next;

        if (hare->next != NULL)
        {
            hare = hare->next->next;
        }
        else
        {
            return 0;
        }
    }

    return 0;
}