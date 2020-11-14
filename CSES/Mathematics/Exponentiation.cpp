/*
*/
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define inf (1<<28)
#define CLR(x,y) memset( x,y,sizeof(x))
#define Fill(x,y) fill(begin(x),end(x),y)
#define read(x) freopen(x, "r", stdin);
#define write(x) freopen( x, "w", stdout);
#define db(x) cout << #x << " -> " << x << endl;

typedef long long ll;
typedef vector<int> v;
typedef pair<int,int> pii;
typedef map<int,int> mp;

const int mod = 1e9+7;
// direction array
int fx[] = {0, 0, 1, -1, -1, -1, 1, 1};
int fy[] = {1, -1, 0, 0, -1, 1, -1, 1};
// king move
int kx[] = {1, 1, 2, 2, -1, -1, -2, -2};
int ky[] = {2, -2, 1, -1, 2, -2, 1, -1};
/*=====================================*/

ll binpow(ll a, ll b) {
    a %=mod;
    ll sum = 1;
    while ( b>0) {
        if (b&1) sum = sum*a%mod;
        a = a*a%mod;
        b>>=1;
    }
    return sum;
}

int main (){
#ifdef __sh
    read("in.txt");
    //write( "out.txt");
#endif
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i<n; i++) {
        ll x, y;
        cin >> x >> y;
        ll ans =binpow(x,y);
        cout << ans << endl;
    }

    return 0;
}
