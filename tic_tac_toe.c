#include <stdio.h>
int main()
{

    char a = ' ', b = ' ', c = ' ', d = ' ', e = ' ', f = ' ', g = ' ', h = ' ', i = ' ';
    char turn = 'X';
    int moves = 0;
    int limit = 9;
    printf("%c | %c | %c\n", a, b, c);
    printf("---------\n");
    printf("%c | %c | %c\n", d, e, f);
    printf("---------\n");
    printf("%c | %c | %c\n", g, h, i);

    while (1)
    {
        char input;
        printf("Turn of %c\n", turn);
        printf("ENTER CHOICE : ");
        scanf(" %d", &input);
        switch (input)
        {
        case 1:
            if (a != ' ')
            {
                printf("Position already filled, choose a different position\n");
                continue;
            }
            a = turn;
            break;
        case 2:
            if (b != ' ')
            {
                printf("Position already filled, choose a different position\n");
                continue;
            }
            b = turn;
            break;
        case 3:
            if (c != ' ')
            {
                printf("Position already filled, choose a different position\n");
                continue;
            }
            c = turn;
            break;
        case 4:
            if (d != ' ')
            {
                printf("Position already filled, choose a different position\n");
                continue;
            }
            d = turn;
            break;
        case 5:
            if (e != ' ')
            {
                printf("Position already filled, choose a different position\n");
                continue;
            }
            e = turn;
            break;
        case 6:
            if (f != ' ')
            {
                printf("Position already filled, choose a different position\n");
                continue;
            }
            f = turn;
            break;
        case 7:
            if (g != ' ')
            {
                printf("Position already filled, choose a different position\n");
                continue;
            }
            g = turn;
            break;
        case 8:
            if (h != ' ')
            {
                printf("Position already filled, choose a different position\n");
                continue;
            }
            h = turn;
            break;
        case 9:
            if (i != ' ')
            {
                printf("Position already filled, choose a different position\n");
                continue;
            }
            i = turn;
            break;
        default:
            printf("THAT SEEMS TO BE INVALID\n");
            continue;
        }

        printf("%c | %c | %c\n", a, b, c);
        printf("---------\n");
        printf("%c | %c | %c\n", d, e, f);
        printf("---------\n");
        printf("%c | %c | %c\n", g, h, i);
        moves++;
        if (a == b && b == c && a != ' ')
        {
            printf("%c WON\n", turn);
            break;
        }
        else if (d == e && e == f && d != ' ')
        {
            printf("%c WON\n", turn);
            break;
        }
        else if (g == h && h == i && g != ' ')
        {
            printf("%c WON\n", turn);
            break;
        }
        else if (a == d && d == g && a != ' ')
        {
            printf("%c WON\n", turn);
            break;
        }
        else if (b == e && e == h && b != ' ')
        {
            printf("%c WON\n", turn);
            break;
        }
        else if (c == f && f == i && c != ' ')
        {
            printf("%c WON\n", turn);
            break;
        }
        else if (a == e && e == i && a != ' ')
        {
            printf("%c WON\n", turn);
            break;
        }
        else if (c == e && e == g && c != ' ')
        {
            printf("%c WON\n", turn);
            break;
        }
        if (moves == 9)
        {
            printf("It's a tie !\n");
            break;
        }
        if (turn == 'O')
        {
            turn = 'X';
        }
        else
            turn = 'O';
    }

    return 0;
}

