#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int start = 0;
    int end = size - 1;
    while (true)
    {
        if (start > end)
        {
            break;
        }
        if (end == start)
        {
            cout << arr[end];
        }
        else
        {
            cout << arr[start] << "  ";
            cout << arr[end] << "  ";
        }

        start = start + 1;
        end = end - 1;
    }
}