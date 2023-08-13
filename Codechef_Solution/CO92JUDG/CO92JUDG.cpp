#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n], brr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }

        int max1 = 0, max2 = 0, temp1 = 0, temp2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max1)
            {
                max1 = arr[i];
                temp1 = i;
            }

            if (brr[i] > max2)
            {
                max2 = brr[i];
                temp2 = i;
            }
        }

        arr[temp1] = 0;
        brr[temp2] = 0;

        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            sum1 = sum1 + arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum2 = sum2 + brr[i];
        }

        if (sum1 < sum2)
        {
            cout << "Alice" << endl;
        }
        else if (sum2 < sum1)
        {
            cout << "Bob" << endl;
        }
        else
            cout << "Draw" << endl;
    }
}