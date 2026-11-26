#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, value, index = -1;
    cout << "Enter value to delete: ";
    cin >> value;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == value)
        {
            index = i;
            break;
        }
    }
    if(index == -1)
    {
        cout << "Value not found";
    }
    else
    {
        for(int i = index; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        cout << "Array after deletion: ";
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
