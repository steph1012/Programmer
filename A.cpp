#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define ll long long
using namespace std;
ll t,n,m,a[(int)2e5+5]; 

ll page(int day)
{
    ll sum = 0;
    for (int i=0;i<day;i++)
        sum += a[i];
    ll counter = 0, c=1;
    for (int i=day;i<n;i++)
    {
        counter++; //calculate the each coffee that drop next first one
        if (a[i]-c>0)
            sum+=a[i]-c;
        if (counter == day)
            c++,counter = 0;
    } 
    return sum; 
}

int main()
{
    cin >> t; 
    while(t--)
    {
        cin >> n >>m;
        ll sum =0;
        for (int i=0;i<n;i++)
            cin >> a[i], sum+=a[i];
        ll L = 1, R = n+1, ans = -1;
        while(L<R)
        {
            ll M = (L+R)/2;
            if (page(M)>=m)
                ans = M,R = M;
            else
                L = M+1;
        }
        cout << ans <<'\n';

    }

}