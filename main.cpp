
#include "stdio.h"

using namespace std;

int cycleLength(int num1, int num2)
{
    int maximum = 0, n=0;
    if(num1 < num2)
    {
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
    }
    else
    {
        while(num2 <= num1)
        {
            n = num2;
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
            num2++;
        }

    }

    return maximum;
}

int main()
{
    int a[100], b[100], counter[100], i = 0;
    while (i < 100 && scanf("%d %d\n", &a[i], &b[i]) >= 1)
    {
        counter[i] = cycleLength(a[i], b[i]);
        printf("%d %d %d\n", a[i], b[i], counter[i]);
        i++;
    }

    return 0;
}
