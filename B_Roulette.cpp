#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace  __gnu_pbds;
using namespace  std;
 
//                                「本 物 の 柔 術 を 見 せ て や る」
 
#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
#define all(x)   (x).begin(), (x).end()
#define mod      1000000007
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
#define forin(x,y) for(int i=0;i<x;i++){int x;cin>>x;y.pb(x);}
#define forout(x)  for(auto y:x){cout<<y<<' ';}
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;

bool substringcheck(string s1,string s2){
    // String 1 in String 2
    if (s2.find(s1) != std::string::npos) return true;
    else return false;
}



int findMinValue(const std::map<int, int>& myMap) {
    // if (myMap.empty()) {
    //     // Handle empty map
    //     throw std::runtime_error("Map is empty");
    // }
    
    int minValue = std::numeric_limits<int>::max(); // Initialize with maximum possible value
    
    for (const auto& pair : myMap) {
        if (pair.second < minValue) {
            minValue = pair.second;
        }
    }
    
    return minValue;
}



void solve()
{
    int n;cin>>n;
    vector<vector<int>>vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vector<int>vec2;
        for(int i=0;i<x;i++){
            int y;cin>>y;
            vec2.push_back(y);
        }
        vec1.push_back(vec2);
    }
    int val;cin>>val;
    map<int,int>m1;
    for (int i = 0; i < vec1.size(); i++){
        for (int j = 0; j < vec1[i].size(); j++){
            if(vec1[i][j]==val){
                m1.insert(pair<int,int>(i+1,vec1[i].size()));
            }
        }    
        cout << endl;
    }
    int new_val=findMinValue(m1);
    vll vec4;
    int count=0;

for (const auto& pair : m1){
    if(pair.second==new_val){
        count++;
        vec4.push_back(pair.first);
        // cout << it->first<<" "<<it->second<<endl;      
    }
}
    cout<<count<<endl;
    for(auto x:vec4){
        cout<<x<<" ";
    }
}

int main(){
    FAST;
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
}
return 0;
}
