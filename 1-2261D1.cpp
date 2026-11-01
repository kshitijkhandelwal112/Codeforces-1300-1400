#include <bits/stdc++.h>
#define int long long
using namespace std;
// very nice algorithm, first time I solved 1300 rated problem.
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,m; cin>>n>>m;
        if(n<4){
            cout<<n-1<<"\n";
            for(int i=1;i<n;i++){
                cout<<i<<" "<<i<<"\n";
            }
        }else{
            int z = n/2;
            cout<<n-z<<"\n";
            for(int i=1;i<=n-z;i++){
                cout<<i<<" "<<i+z-1<<"\n";
            }
        }
    }
    return 0;
}
/* ALGORITHM
- The answer is of course not simply n-1. {that's only valid for n=1,2,3}
- For n = 4: say the hiding positions are labelled 1 2 3 4.
- We can have 1-2, 2-3, 3-4 (3 detectors are enough), if first two work/(say glow)=> hiding in pos.2 and if none glows then pos.5
- For n = 5, if positions are 1 2 3 4 5, we can still have 1-2, 2-3, 3-4.
- For n = 6, we can have sets of 3, i.e. 1-2-3, 2-3-4, 3-4-5. And if none glows then it is 6.
- For n = 7, 8, 9 and all others we get pattern:
    make a group of GIF of n/2 (i.e. int n/2) and number of such continuous groups have to be taken. (and last position is not to be included)
- e.g. for n=9, GIF of 9/2 is 4.
- Then we'll have: 1-2-3-4, 2-3-4-5, 3-4-5-6, 4-5-6-7, 5-6-7-8 as the 5 detectors.
*/