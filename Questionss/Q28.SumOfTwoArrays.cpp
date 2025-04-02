#include<bits/stdc++.h>
using namespace std;

int reverse(vector<int>v){
    int s = 0;
    int e = v.size()-1;
    while(s<e){
        swap(v[s++],v[e--]);
    }
    return v;
}

int findarray(vector<int>a, int m, vector<int>b, int n){
    int i = n-1;
    int j = m-1;
    vector<int>ans;
    int carry = 0;

    while(i>=0&&j>=0){
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1+val2+carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case
    while(i>=0){
        int sum = a[i]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while(j>=0){
        int sum = b[j]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }

    // third case
    while(carry !=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    return reverse(ans);
}

int main(){



    return 0;
}