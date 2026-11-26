#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, pos;
    int *ptr = arr;
    cout << "Enter position to delete: ";
    cin >> pos;
    if(pos < 1 || pos > n)
    {
        cout << "Invalid position";
    }
    else
    {
        for(int i = pos - 1; i < n - 1; i++)
        {
            *(ptr + i) = *(ptr + i + 1);
        }
        n--;
        cout << "Array after deletion: ";
        for(int i = 0; i < n; i++)
        {
            cout << *(ptr + i) << " ";
        }
    }
    return 0;
}
