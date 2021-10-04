#include<bits/stdc++.h>
#define M_PI       3.14159265358979323846
#define Speed_UP  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define     pb                push_back 
#define     ff                first 
#define     ss                second
#define     pii                pair<int,int> 
#define sz(x)                 (int)x.size()
#define all(x)                 (x).begin(), (x).end()
#warning Remember to change t
inline void setIO();
using namespace std;
typedef long long ll;
typedef long double ld;

int solve(){
    int a,b,c,d; // cover this
    cin >> a >> b >> c >> d;

    int p,q,r,s; // req
    cin >> p >> q >> r >> s;

    // if the cover is inside the req

    if(p<=a&&q<=b&&r>=c&&s>=d){
        cout<<"0";
    }else{
        // the req cuts the cover along axes
        // along x-axis
        if(((p<=a && r>=c) && !(d>s&&q>b))||((q<=b&&s>=d)&&!(r<c&&a<p))){
            int intersect = 0;
            int x = max(0,min(c,r)-min(a,p));
            int y = max(0,min(d,s)-min(b,q));
            intersect = x*y;
            cout<<(c-a)*(d-b)-intersect;
        }else{
            cout<<(c-a)*(d-b);
        }
    }

  
  
    return 0;
  }
  
int main(){
    Speed_UP
    
    #ifndef ONLINE_JUDGE
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    #endif
    int t=1;
    while(t--){
        solve();
    }
}


inline void setIO(string name="") {
    #ifndef ONLINE_JUDGE 
    freopen((name+".in").c_str(), "r", stdin); 
    freopen((name+".out").c_str(), "w", stdout);
    #endif
    }
