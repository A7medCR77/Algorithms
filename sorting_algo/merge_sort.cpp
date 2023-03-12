#include <bits/stdc++.h>
#define ll long long
#define sz(s) s.size()

using namespace std;


template < typename T = int > istream& operator >> (istream &in, vector < T > &v) {
    for (auto &x : v) in >> x;
    return in;
}

template < typename T = int > ostream& operator << (ostream &out, const vector < T > &v) {
    for (const T &x : v) out << x << ' ';
    return out;
}



//Time Complexity: O(n*log(n))
//Space Complexity: O(n)


void Sort(vector<ll>&vec,ll l,ll r,ll mid)
{

    ll szl=mid-l+1,szr=r-mid;
    
    vector<ll>left(szl),right(szr);

    for(int i=0;i<szl;i++)
        left[i]=vec[l+i];

    
    for(int i=0;i<szr;i++)
        right[i]=vec[i+mid+1];
    


    ll idx1=0,idx2=0,idx3=l;


    while(idx1<szl&&idx2<szr)
    {
        if(left[idx1]>=right[idx2])
            vec[idx3++]=right[idx2++];
        else
            vec[idx3++]=left[idx1++];
    }

    while(idx1<szl)
    {
        vec[idx3++]=left[idx1++];
    }

    while(idx2<szr)
    {
        vec[idx3++]=right[idx2++];
    }

}

void Merge_Sort(vector<ll>&vec,ll l,ll r)
{
    if(l<r)
    {
    ll mid=l+(r-l)/2;

    Merge_Sort(vec,l,mid);

    Merge_Sort(vec,mid+1,r);

    Sort(vec,l,r,mid);
    }
}

void solve()
{
    vector<ll>vec={2,1,3,5,2,5};
    
    Merge_Sort(vec,0,sz(vec)-1);

    cout<<vec;
}


void A7med(){
    ios_base ::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#endif
}

int main(){
    A7med();
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
