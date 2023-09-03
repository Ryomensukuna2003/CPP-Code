#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int N;
	cin>>N;
	
	long long ans = 0;
	
	for(int i=1;i<N;i++){
		int X = i,Y = N-i;
		long long x = 0,y = 0;
		for(int j=1;j*j<=X;j++){
			if(X%j==0){
				x++;
				if(X!=j*j)x++;
			}
		}
		for(int j=1;j*j<=Y;j++){
			if(Y%j==0){
				y++;
				if(Y!=j*j)y++;
			}
		}
		ans += x * y;
	}
	
	cout<<ans<<endl;
	
	return 0;
}

//      4
// (A,B,C,D)=(1,1,1,3)
// (A,B,C,D)=(1,1,3,1)
// (A,B,C,D)=(1,3,1,1)
// (A,B,C,D)=(3,1,1,1)
// (A,B,C,D)=(1,2,2,1)
// (A,B,C,D)=(2,1,1,2)
// (A,B,C,D)=(1,2,1,2)
// (A,B,C,D)=(2,1,2,1)

//      6
// (A,B,C,D)=(1 1 1 5)
// (A,B,C,D)=(1 1 5 1)
// (A,B,C,D)=(1 5 1 1)
// (A,B,C,D)=(5 1 1 1)
// (A,B,C,D)=(1 3 3 1)
// (A,B,C,D)=(3 1 1 3)
// (A,B,C,D)=(1 3 1 3)
// (A,B,C,D)=(3 1 3 1)
// (A,B,C,D)=(1 4 1 2)
// (A,B,C,D)=(1 2 1 4)
// (A,B,C,D)=(2 1 4 1)
// (A,B,C,D)=(4 1 2 1)

//  8 14 20 28 37
