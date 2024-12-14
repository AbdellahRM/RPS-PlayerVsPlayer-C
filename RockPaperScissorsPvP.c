#include <stdio.h>
#include <stdlib.h>

int main()
{

    int Player1, Player2;

    printf("Player1 choose Paper=1 Rock=2 Scissors=3   :");

    scanf("%d", &Player1);

    printf("Player2 choose Paper=1 Rock=2 Scissors=3    :");

    scanf("%d", &Player2);

    if (Player1 == Player2)
    {
        printf("Tie");
    }
    else if (Player1 == 1 && Player2 == 2)
    {
        printf("Player1 Won\n");
    }
    else if (Player1 == 1 && Player2 == 3)
    {
        printf("Player2 won\n");
    }
    else if (Player1 == 2 && Player2 == 3)
    {
        printf("Player1 won\n");
    }
    else if (Player1 == 2 && Player2 == 1)
    {
        printf("Player2 Won\n");
    }
    else if (Player1 == 3 && Player2 == 1)
    {
        printf("Player1 won\n");
    }
    else if (Player1 == 3 && Player2 == 2)
    {
        printf("Player2 won\n");
    }
    system("pause");
}
