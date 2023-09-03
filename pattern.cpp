

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     int x,y;
//     for(int j=1;j<=t;j++){
//         cin>>x>>y;
//             if(x>=y){
//                 cout<<"YES"<<endl;
//             }
//             else if(x<y){
//                 cout<<"NO"<<endl;
//             }
//     } 
// }
#include <iostream>
using namespace std;

int main() {
	int t; 
	cin>>t;
	int x,y;
	for(int i=1;i<=t;i++){
	   cin>>x>>y;
	   cout<<(x*y)<<endl;
	}
	return 0;
}
