
#include "functions.h"
#include <cmath>

int findMinAbsIndex(const double arr[], int n)
{
    if (n <= 0)
        return -1;

    int minIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (std::fabs(arr[i]) < std::fabs(arr[minIndex]))
            minIndex = i;
    }

    return minIndex;
}

double sumAbsAfterFirstNegative(const double arr[], int n)
{
    double sum = 0.0;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (found)
            sum += std::fabs(arr[i]);

        if (!found && arr[i] < 0)
            found = true;
    }

    return sum;
}

int compressArray(double arr[], int n, double a, double b)
{
    if (a > b)
    {
        double temp = a;
        a = b;
        b = temp;
    }

    int writeIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < a || arr[i] > b)
        {
            arr[writeIndex] = arr[i];
            writeIndex++;
        }
    }

    for (int i = writeIndex; i < n; i++)
        arr[i] = 0.0;

    return writeIndex;
}
