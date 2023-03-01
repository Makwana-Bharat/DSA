#include <stdio.h>
#include <conio.h>
#include <dos.h>
#define MAX 8
struct animeted_stack
{
    int data;
    struct animeted_stack *pre;
} *top = NULL, *temp = NULL;
int flag = 0, i = 15, j, k = 0, x = 40, y = 1;

void Current_Stack();
void PUSH()
{
    if (k == MAX)
    {
        textcolor(RED);
        cprintf("\nStack Is Overflow");
        getch();
        Current_Stack();
    }
    else
    {
        flag = 0;
        k++;
        temp = (struct animeted_stack *)malloc(sizeof(struct animeted_stack));
        printf("\nEner Data In Stac");
        scanf("%d", &temp->data);
        temp->pre = top;
        top = temp;
    }
}
void POP()
{
    clrscr();
    textcolor(RED);
    if (top == NULL)
    {
        cprintf("\n\n\n\n");
        cprintf("\n\r                             |     S      |                              ");
        cprintf("\n\r                             |     T      |                              ");
        cprintf("\n\r                             |     A      |                              ");
        cprintf("\n\r                             |     C      |                              ");
        cprintf("\n\r                             |     K      |                              ");
        cprintf("\n\r                             |     U      |                              ");
        cprintf("\n\r                             |     D      |                              ");
        cprintf("\n\r                             |     E      |                              ");
        cprintf("\n\r                             |     R      |                              ");
        cprintf("\n\r                             |     F      |                              ");
        cprintf("\n\r                             |     L      |                              ");
        cprintf("\n\r                             |     O      |                              ");
        cprintf("\n\r                             |     W      |                              ");
        cprintf("\n\r                             ++++++++++++++                              ");
    }
    else
    {
        temp = top;
        flag = 2;
        i += 2;
        Current_Stack();
        top = top->pre;
        printf("\nData Popped");
        free(temp);
    }
    getch();
}
void Current_Stack()
{

    clrscr();
    textcolor(RED);
    if (top == NULL)
    {
        cprintf("\n\n\n\n");
        cprintf("\n\r                             |     S      |                              ");
        cprintf("\n\r                             |     T      |                              ");
        cprintf("\n\r                             |     A      |                              ");
        cprintf("\n\r                             |     C      |                              ");
        cprintf("\n\r                             |     K      |                              ");
        cprintf("\n\r                             |     U      |                              ");
        cprintf("\n\r                             |     D      |                              ");
        cprintf("\n\r                             |     E      |                              ");
        cprintf("\n\r                             |     R      |                              ");
        cprintf("\n\r                             |     F      |                              ");
        cprintf("\n\r                             |     L      |                              ");
        cprintf("\n\r                             |     O      |                              ");
        cprintf("\n\r                             |     W      |                              ");
        cprintf("\n\r                             ++++++++++++++                              ");
    }
    else
    {
        for (j = 0; j < k; j++)
        {
            printf("\n");
        }
        printf("\n\n\n\n");
        printf("\n         STACK                  |            |                              ");
        printf("\n                                |            |                              ");
        printf("\n                                |            |                              ");
        printf("\n                                |            |                              ");
        printf("\n                                |            |                              ");
        printf("\n                                |            |                              ");
        printf("\n                                |            |                              ");
        printf("\n                                |            |                              ");
        printf("\n                                ++++++++++++++                              ");
        if (flag == 1)
        {
            for (temp = top, j = 0; temp != NULL; temp = temp->pre, j++)
            {
                gotoxy(40, 14 + j);
                printf("%d\n", temp->data);
            }
        }
        else if (flag == 0)
        {
            textcolor(GREEN);
            for (temp = top->pre, j = 0; temp != NULL; temp = temp->pre, j++)
            {
                gotoxy(x, 15 + j);
                cprintf("%d", temp->data);
            }
            for (y = 1; y < i + j; y++)
            {
                gotoxy(x, y);
                cprintf("%d", top->data);
                delay(250);
                printf("\b ");
            }
            gotoxy(x, y - 1);
            cprintf("%d", top->data);
            i--;
        }
        else
        {
            y = 15;
            for (temp = top->pre, j = 0; temp != NULL; temp = temp->pre, j++)
            {
                gotoxy(x, 14 + j);
                printf("%d", temp->data);
                y--;
            }
            for (; y >= 0; y--)
            {
                gotoxy(x, y);
                printf("%d", top->data);
                delay(250);
                printf("\b ");
            }
        }
    }
    getch();
}
void main()
{
    char ch;
    do
    {
        clrscr();
        printf("\n                                Stack Operation       ");
        printf("\n                               -----------------      ");
        printf("\n                       +++++++++++++++++++++++++++++++");
        printf("\n                       | Key   |     Operation       |");
        printf("\n                       +++++++++++++++++++++++++++++++");
        printf("\n                       |   0   |      Exit           |");
        printf("\n                       |   1   |      Push           |");
        printf("\n                       |   2   |       Pop           |");
        printf("\n                       |   3   |  See Current Stack  |");
        printf("\n                       +++++++++++++++++++++++++++++++");
        printf("\n\n\tEnter Your Choich:;");
        textcolor(GREEN);
        ch = getche();
        switch (ch)
        {
        case '0':
            printf("\nThank You ...");
            getch();
            break;
        case '1':
            PUSH();
            if (k != MAX)
                Current_Stack();
            break;
        case '2':
            POP();
            break;
        case '3':
            flag = 1;
            Current_Stack();
            break;
        default:
            printf("\nInvalid Choich..");
            getch();
            break;
        }
    } while (ch != '0');
}