#include <stdio.h>

int triSum(int);

int divisors(int);

int main(void)
{
    int count = 5, num = 0, arr[64];

    while (count > 0)
    {
        num++;

        // find the sum of the given number
        int sum = triSum(num);


        if (divisors(sum) > 10)
        {
            count--;
            printf("\n%d: ", sum);

            for (int i = 1; i <= sum / 2; i++)
            {
                if (sum % i == 0)
                {
                    printf("%d, ", i);
                }
            }

            printf("%d", sum);

        }
    }
    printf("\n\n");

    return 0;
}

int triSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num;
        num--;
    }

    return sum;
}

int divisors(int sum)
{
    int divisors = 1;

    for (int i = 1; i <= sum / 2; i++)
    {
        if (sum % i == 0)
        {
            // printf("%d, ", i);
            divisors++;
        }
    }

    return divisors;
}