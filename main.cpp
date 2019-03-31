
#include <iostream>
#include <stdio.h>

using namespace std;

int cycleLength(int num1, int num2);
void orderInput(int* num1, int* num2);


int main()
{
    int i, j, maxCycle;
    while (scanf("%d %d", &i, &j) >= 1)
    {
        maxCycle = cycleLength(i, j);
        printf("%d %d %d\n", i, j, maxCycle);
    }

    return 0;
}

int cycleLength(int num1, int num2)
{
    int maximum = 0;
    long n = 0;

    orderInput(&num1, &num2);
    while(num1 <= num2)
    {
        n = num1;
        int counter = 1;
        while(n != 1)
        {
            counter++;
            n = (n%2!=0)?(n*3+1):n/2;
        }
        if (counter > maximum)
        {
            maximum = counter;
        }
        num1++;
    }

    return maximum;
}

void orderInput(int* num1, int* num2)
{
    if (*num1 > *num2){swap(*num2, *num1);}
}
