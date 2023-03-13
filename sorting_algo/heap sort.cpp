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

//Time Complexity: O(N log N)

//Space Complexity: O(1)

void heapify(vector<ll>&vec,int n,int parent)
{
    
    ll left_child=2*parent+1;
    ll right_child=2*parent+2;
    ll max=parent;

    if(left_child<n&&vec[left_child]>=vec[max])
        max=left_child;
        
    if(right_child<n&&vec[right_child]>=vec[max])
        max=right_child;
    
    if(max!=parent)
    {
        swap(vec[max],vec[parent]);
        heapify(vec,n,max);
    }

}

void buildHeap(vector<ll>&vec,int n)
{
    for(int i=n/2-1;i>=0;i--)
        heapify(vec,n,i);
}

void heap_sort(vector<ll>&vec, int n)
{
    
    buildHeap(vec,n);

    for(int i=n-1;i>=0;i--)
    {
        swap(vec[0],vec[i]);
        heapify(vec,i,0);
    }
}

void solve()
{
    vector<ll>vec={1,4,3,2,5,6,2};
    
    heap_sort(vec,sz(vec));

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
