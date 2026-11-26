#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, value, pos;
    int *ptr = arr;
    cout << "Enter value: ";
    cin >> value;
    cout << "Enter position: ";
    cin >> pos;
    if(pos < 1 || pos > n + 1)
    {
        cout << "Invalid position";
    }
    else
    {
        for(int i = n; i >= pos; i--)
        {
            *(ptr + i) = *(ptr + i - 1);
        }
        *(ptr + pos - 1) = value;
        n++;
        cout << "Array after insertion: ";
        for(int i = 0; i < n; i++)
        {
            cout << *(ptr + i) << " ";
        }
    }

    return 0;
}
