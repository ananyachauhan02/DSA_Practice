// minimum penalty for shop - leetcode

// approach - 1 - o(n^2)
int bestClosingTime(string customers)
{
    int mini = INT_MAX;
    int n = customers.length();
    int hr = 0;
    int ans = 0;
    int penalty = 0;

    for (int hr = 0; hr <= n; hr++)
    {
        penalty = 0;
        for (int i = 0; i < hr; i++)
        {
            if (customers[i] == 'N')
            {
                penalty++;
            }
        }
        for (int i = hr; i <= n; i++)
        {
            if (customers[i] == 'Y')
            {
                penalty++;
            }
        }

        if (mini > penalty)
        {
            mini = penalty;
            ans = hr;
        }
    }

    return ans;
}

// approach - 2 - O(n)

int bestClosingTime(string customers)
{

    int n = customers.length();
    int res = n;
    int ans = 0;
    int cntN = 0;
    int penalty = n;

    for (int i = 0; i < n; i++)
    {
        // shop is openend
        if (customers[i] == 'N')
        {
            cntN++;
        }
    }
    ans = cntN;
    for (int i = n - 1; i >= 0; i--)
    {
        // shop closing one by one
        if (customers[i] == 'Y')
        {
            cntN++;
        }
        else
        {
            cntN--;
        }

        if (ans >= cntN)
        {
            ans = cntN;
            res = i;
        }
    }

    return res;
}
