#include<bits/stdc++.h>

using namespace std;

int main() {
	int n; 
	int a[1005], dp[1005]={0}, res=0;
	cin >> n;
	for(int i=0; i<=n; i++) cin >> a[i];
	for(int i=1; i<=n; i++){
		dp[i]=1;
		for(int j=1; j<i; j++){
			if(a[i]>a[j]) dp[i]=max(dp[i], dp[j]+1);
		}
		res = max(res, dp[i]);
	}
	cout << res;
	return 0;
}
 
 

