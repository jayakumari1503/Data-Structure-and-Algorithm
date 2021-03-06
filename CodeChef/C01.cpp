#include<bits/stdc++.h>
using namespace std;
int main()
{
int N, H, x;
cin >> N >> H >> x;
int z[N];
for(int i = 0; i<N; i++)
    cin >> z[i];
sort( z, z + N );
if( z[N-1] + x == H)
    cout << "Yes" << endl;
else
    cout << "No" << endl;
return 0;
}
