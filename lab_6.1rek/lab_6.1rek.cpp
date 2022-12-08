#include <iostream>  
#include <iomanip>

using namespace std;

void array_create(int* arr, const int min, const int max, const int size, int i) {
    arr[i] = min + rand() % (max - min + 1);
    if (i < size - 1)
        array_create(arr, min, max, size, i + 1);

}

void array_out(int* arr, const int size, int i)
{
    cout << setw(4) << arr[i];

    if (i < size - 1)
        array_out(arr, size, i + 1);
}

int array_count(int* arr, int const size, int count, int i)
{
    if (i <= size - 1) {

        if (arr[i] % 6 == 0 || i % 5 != 0)
            count++;

        array_count(arr, size, count, i + 1);
    }
    else
        return count;
}

int sum_element(int* arr, int const size, int sum, int i)
{
    if (i <= size - 1) {
        if (arr[i] % 6 == 0 || i % 5 != 0)
            sum += arr[i];
        sum_element(arr, size, sum, i + 1);
    }
    else
        return sum;

}

void zero_elements(int* arr, int const size, int i)
{
    if (i < size - 1) {
        if (arr[i] % 6 == 0 || i % 5 != 0)
            arr[i] = 0;

        zero_elements(arr, size, i + 1);
    }

}






int main()
{
    srand((unsigned)time(NULL));
    const int n = 25;
    int r[n];
    int count = 0;

    const int max = 73;
    const int min = 4;

    array_create(r, min, max, n, 0);
    array_out(r, n, 0);

    cout << endl;
    cout << endl;

    array_count(r, n, count, 0);
    int num = array_count(r, n, count, 0);
    cout << "The number of elements that are multiples of 6 or with indices : except for multiples of 5 = " << num << endl;;
    cout << endl;

    sum_element(r, n, 0, 0);
    int suma = sum_element(r, n, 0, 0);
    cout << "The sum of elements that are multiples of 6 or with indices : except for multiples of 5 = " << suma << endl;
    cout << endl;

    zero_elements(r, n, 0);
    array_out(r, n, 0);
}