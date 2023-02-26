#include <string.h>

/* OVERFLOW */
int IS_OVERFLOW(int rear, int Size)
{
    if (rear == Size)
    {
        printf("\nOverflow....");
        return 1;
    }
    return 0;
}
int IS_UNDERFLOW(int front)
{
    if (front == -1)
    {
        /* code */
        printf("\nUnderflow..");
        return 1;
    }
    return 0;
}
/*EnQueue*/
int Enqueue(int Queue[], int Q_Size, int *front, int *rear, int item, char *Q_Type)
{
    // NORMAL QUEUE
    if (strcmp(*Q_Type, "Normal") == 0)
    {
        if (!IS_OVERFLOW(*rear, Q_Size - 1))
        {
            /* HANDLING FIRST ELEMENT */
            if (*front == -1)
                *front = 0;
            Queue[(*rear)++] = item;
            printf("\n%d Is EnQueued..", Queue[*rear]);
            return 1;
        }
        return 0;
    }
    /* CIRCULAR QUEUE */
    else if (strcmp(*Q_Type, "Circular") == 0)
    {
        if (!IS_OVERFLOW(*rear + 1, *front) && !(*front == 0 && *rear == Q_Size))
        {
            /* FIRST ELEMENT*/
            if (*front == -1)
                *front = 0;
            /* LAST ELEMENT BUT Queue Having Space */
            else if (*rear == Q_Size - 1)
                *rear = -1; // Leter Incerement
            Queue[(*rear)++] = item;
            printf("\n%d Is EnQueued..", Queue[*rear]);
            return 1;
        }
        return 0;
    }
    /* DOUBLE ENDED QUEUE */
    else
    {
        // Comming SOON
    }
}