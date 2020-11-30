#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int count = 0;
    int counter = 0;
    int mul = 3 * k;
    while(counter < n)
    {
        if(a[counter] >= mul)
        {
            count += a[counter] - mul;
        }
        else
        {
            if(a[counter] >= 2*k)
            {
                count += a[counter] - (2*k);
            }
            else
            {
                if(a[counter] >= k)
                {
                    count += a[counter] - k;
                }
                else
                {
                    count += a[counter];
                }
            }
        }
        counter++;
    }
    cout << count;
    return 0;
}
