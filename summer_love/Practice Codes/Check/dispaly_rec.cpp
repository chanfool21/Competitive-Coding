#include<bits/stdc++.h>
using namespace std;
void display(int );
int main()
{

    int n;
    cin>>n;
     display(n);
     return 0;
}
void display(int n)

{
    if(n == 0)
        return;
    display((n-1));
    cout<<n<<"\n";

}
