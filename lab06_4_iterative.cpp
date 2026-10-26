
#include <iostream>
#include <iomanip>
#include "functions.h"

int main()
{
    int n;
    double a, b;

    std::cout << "Enter n: ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Invalid array size.\n";
        return 1;
    }

    double* arr = new double[n];

    std::cout << "Enter " << n << " real numbers:\n";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    std::cout << "Enter a and b: ";
    std::cin >> a >> b;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Original array:\n";
    for (int i = 0; i < n; i++)
        std::cout << std::setw(8) << arr[i];
    std::cout << '\n';

    int minIndex = findMinAbsIndex(arr, n);
    double sum = sumAbsAfterFirstNegative(arr, n);

    std::cout << "Min absolute element number: " << minIndex + 1 << '\n';
    std::cout << "Sum of absolute values after first negative: " << sum << '\n';

    compressArray(arr, n, a, b);

    std::cout << "Compressed array:\n";
    for (int i = 0; i < n; i++)
        std::cout << std::setw(8) << arr[i];
    std::cout << '\n';

    delete[] arr;

    return 0;
}
