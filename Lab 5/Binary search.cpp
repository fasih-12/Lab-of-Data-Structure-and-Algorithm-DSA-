#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int value;
    int low = 0, high = 4;
    int mid;
    int found = 0;
    cout << "Enter value to search: ";
    cin >> value;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == value)
        {
            cout << "Element found at index: " << mid;
            found = 1;
            break;
        }
        else if(value < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if(found == 0)
    {
        cout << "Element not found";
    }
    return 0;
}
