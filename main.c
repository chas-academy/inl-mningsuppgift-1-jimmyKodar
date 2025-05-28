#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    // variables
    int dice_rolls[100];
    int sum = 0, ones = 0, twos = 0, threes = 0, fours = 0, fives = 0, sixes = 0;

    // roll dice the dices
    for (int i = 0; i < 100; i++)
    {
        dice_rolls[i] = (rand() % 6) + 1;
        sum += dice_rolls[i];

        switch (dice_rolls[i])
        {
        case 1:
            ones++;
            break;
        case 2:
            twos++;
            break;
        case 3:
            threes++;
            break;
        case 4:
            fours++;
            break;
        case 5:
            fives++;
            break;
        case 6:
            sixes++;
            break;
        }
    }

    // print
    printf("%d\n%d\n%d\n%d\n%d\n%d\n", ones, twos, threes, fours, fives, sixes);
    printf("%d\n", sum);
    printf("%f\n", (float)sum / 100);

    return 0;
}
