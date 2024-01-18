#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    bool ans = false;
	    int s = 0;
	    if(n < 4){
	        cout << -1 << endl;
	        s++;
	    }
		else{
	        int k = n % 4;
	        k += 4;
	        if(ans) s--;
	        if(k == 4){
	            cout << "3 4 1 2" << " ";
	            ans = true;
	            s++;
	            int x =0;
	            x+= s;
	        }
	        else if(k==6) cout<<"4 5 6 1 2 3"<<" ";
            else if(k==5) cout<<"4 5 1 2 3"<<" ";
            else if(k==7) cout<<"6 7 1 2 3 4 5"<<" ";
            for(int i=k+1; i<n; i+=4){
               cout<<i+2<<" "<<i+3<<" "<<i<<" "<<i+1<<" ";
            }
            ans = false;
            cout << endl;
	    }
	}
	return 0;
}
