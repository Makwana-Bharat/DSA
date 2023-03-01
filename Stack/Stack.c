/* OVERFLOW */
int IS_FULL(int Size, int Top)
{
    if (Top >= Size - 1)
    {
        printf("\n\n\n\n");
        printf("\n\t                             |     S      |                              ");
        printf("\n\t                             |     T      |                              ");
        printf("\n\t                             |     A      |                              ");
        printf("\n\t                             |     C      |                              ");
        printf("\n\t                             |     K      |                              ");
        printf("\n\t                             |     O      |                              ");
        printf("\n\t                             |     V      |                              ");
        printf("\n\t                             |     E      |                              ");
        printf("\n\t                             |     R      |                              ");
        printf("\n\t                             |     F      |                              ");
        printf("\n\t                             |     L      |                              ");
        printf("\n\t                             |     O      |                              ");
        printf("\n\t                             |     W      |                              ");
        printf("\n\t                             ++++++++++++++                              ");
        return 1;
    }
    return 0;
}

/* UNDERFLOW  */
int IS_EMPTY(int Top)
{
    if (Top <= -1)
    {
        printf("\n\n\n\n");
        printf("\n\t                             |     S      |                              ");
        printf("\n\t                             |     T      |                              ");
        printf("\n\t                             |     A      |                              ");
        printf("\n\t                             |     C      |                              ");
        printf("\n\t                             |     K      |                              ");
        printf("\n\t                             |     U      |                              ");
        printf("\n\t                             |     D      |                              ");
        printf("\n\t                             |     E      |                              ");
        printf("\n\t                             |     R      |                              ");
        printf("\n\t                             |     F      |                              ");
        printf("\n\t                             |     L      |                              ");
        printf("\n\t                             |     O      |                              ");
        printf("\n\t                             |     W      |                              ");
        printf("\n\t                             ++++++++++++++                              ");
        return 1;
    }
    return 0;
}
/*PUSH*/

int PUSH(int STACK[], int Item, int Size, int *Top)
{
    if (!IS_FULL(Size, *Top))
    {
        STACK[++(*Top)] = Item;
        return 1;
    }
    return 0;
}
int POP(int STACK[], int *Top)
{
    if (!IS_EMPTY(*Top))
    {
        printf("\n%d is Popped..", STACK[(*Top)--]);
        return 1;
    }
    return 0;
}

void DISPLAY(int STACK[], int *Top)
{
    if (!IS_EMPTY(*Top))
    {
        printf("\n\nSTACK\n\n\n\n");
        printf("\n\t                             |            |                              ");
        for (int i = *Top; i >= 0; i--)
            printf("\n\t                             |     %d      |                              ", STACK[i]);
        printf("\n\t                             ++++++++++++++                              ");
    }
}