#include<bits/stdc++.h>
class Solution
{
public:
    int candy(vector<int> &v)
    {
        int n = v.size();
        vector<int> ar(n, 1), arr(n, 1);

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] < v[i + 1])
            {
                ar[i + 1] = ar[i] + 1;
            }
        }

        for (int i = n - 1; i > 0; i--)
        {
            if (v[i - 1] > v[i])
            {
                arr[i - 1] = arr[i] + 1;
            }
        }
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans += max(ar[i], arr[i]);
        }

        return ans;
    }
};