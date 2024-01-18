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


void solve()
{
    char arr[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>arr[i][j];
        }
    }
    int arr1[36][36]={
        {1,1},{1,2},{1,3},{1,4},{1,5},{1,6},{1,7},{1,8},{1,9},{1,10},
        {10,1},{10,2},{10,3},{10,4},{10,5},{10,6},{10,7},{10,8},{10,9},{10,10},
        {2,1},{3,1},{4,1},{5,1},{6,1},{7,1},{8,1},{9,1},
        {2,10},{3,10},{4,10},{5,10},{6,10},{7,10},{8,10},{9,10}
    };
    int arr2[28][28]={
        {2,2},{2,3},{2,4},{2,5},{2,6},{2,7},{2,8},{2,9},
        {9,2},{9,3},{9,4},{9,5},{9,6},{9,7},{9,8},{9,9},
        {3,2},{4,2},{5,2},{6,2},{7,2},{8,2},
        {3,9},{4,9},{5,9},{6,9},{7,9},{8,9}
    };
    int arr3[20][20]={
        {3,3},{3,4},{3,5},{3,6},{3,7},{3,8},
        {8,3},{8,4},{8,5},{8,6},{8,7},{8,8},
        {4,3},{5,3},{6,3},{7,3},
        {4,8},{5,8},{6,8},{7,8},
    };
    int arr4[12][12]={
        {4,4},{4,5},{4,6},{4,7},
        {7,4},{7,5},{7,6},{7,7},
        {5,4},{6,4},
        {5,7},{6,7},
    };
    int arr5[4][4]={
        {5,5},{5,6},
        {6,5},{6,6},
    };
    
    int temp[100][100];
    vector<pair<int,int>>vec1;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i][j]=='X'){
                vec1.push_back(pair<int,int>(i+1,j+1));
            }
        }
    }

    int counter = 0;
    for (auto x : vec1) {
        for (int i = 0; i < 36; i++) {
            if (x.first == arr1[i][0] && x.second == arr1[i][1]) {
                counter++;
                break;
            }
        }

        for (int i = 0; i < 28; i++) {
            if (x.first == arr2[i][0] && x.second == arr2[i][1]) {
                counter+=2;
                break;
            }
        }

        for (int i = 0; i < 20; i++) {
            if (x.first == arr3[i][0] && x.second == arr3[i][1]) {
                counter+=3;
                break;
            }
        }

        for (int i = 0; i < 12; i++) {
            if (x.first == arr4[i][0] && x.second == arr4[i][1]) {
                counter+=4;
                break;
            }
        }

        for (int i = 0; i < 4; i++) {
            if (x.first == arr5[i][0] && x.second == arr5[i][1]) {
                counter+=5;
                break;
            }
        }
    }

    cout<<counter<<endl;
}
    


int main(){
    FAST;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
}
return 0;
}
