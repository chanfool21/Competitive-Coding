
#include<bits/stdc++.h>
using namespace std;
int fnc(long n)
{
    int a[7];
    a[0] = 0;
    a[1] = 1,a[2] = 2, a[3] = 5, a[4] = 10, a[5] = 50,a[6] = 100;
    //for(int i = 1; i <= 12; i++)
        //a[i] = pow(2,(i - 1));

        int ctr = 0;

        for(int i = 1; i < 7; i++)
        {
            if(a[i] == n)
            {
                return n;
            }

            if(a[i] > n)
            {
               return a[i -1];
            }
        }
}
int main()
{


    int t;
    scanf("%d", &t);
    long p;
    int ctr;
    while(t--)
    {
        scanf("%ld",&p);
        ctr = 0;
        while(p > 0)
        {
            p = p - fnc(p);
            ctr++;
        }

        cout<<ctr<<endl;
    }
}
