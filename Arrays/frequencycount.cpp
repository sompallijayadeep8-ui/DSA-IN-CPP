#include<iostream>
using namespace std;

void freq(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        bool seen = false;

        // Check if element appeared before
        for(int k = 0; k < i; k++)
        {
            if(arr[k] == arr[i])
            {
                seen = true;
                break;
            }
        }

        if(seen)
        {
            continue;
        }

        int count = 0;

        // Count frequency
        for(int j = 0; j < n; j++)
        {
            if(arr[j] == arr[i])
            {
                count++;
            }
        }

        cout << arr[i] << " -> " << count << endl;
    }
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Frequency Count:" << endl;

    freq(arr, n);

    return 0;
}