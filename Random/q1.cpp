#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Gourav ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// cout<<"Case #"<<cu<<":"<<" "<<"YES"<<endl;
// cout<<"Case #"<<cu<<":"<<" "<<"YES"<<endl;

// just to see the ouput of the array when ever i am stuck
void see(vector<int>arr){
	ll n=arr.size();
	for(ll i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
 // This is to find the GCD of two Numbers
int getGCD(int a, int b){
    while (a>0&&b>0) {
        if (a>b) {
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        return b;
    }
    return a;
}
 
  // This is for finding the gcd of the array which is usefull sometimes
int GcdOfArray(vector<int>& arr){
    int gcd = 0;
    int n=arr.size();
    for (int i=0;i<n;i++) {
        gcd = getGCD(gcd,arr[i]);
    }
    return gcd;
}
// Find me the smaller string 
 // This is for finding if the number is prime or not ....i would also be using this for finding the vector that contains all prime number till N
 // its time complexity is almost equal to sieve of Eratosthene 

bool prime( int n){
	if(n%2==0){
		return false;
	}
	for(int i=3;i*i<=n;i+=2){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int sortpair(pair<int,int>&a, pair<int,int>&b){
	return a.first<b.first;
}

// This is the where i write the logic of the problem




int main(){
	Gourav;
	ll tc;
	cin>>tc;
	int cu=1;
	while(cu<=tc){
     		int s,d,k;
		cin>>s>>d>>k;
		int total_bun = (2*s)+(2*d);
		int total_material=(s)+(2*d);
		if(total_bun-1>=k&&total_material>=k){
			cout<<"Case #"<<cu<<":"<<" "<<"YES"<<endl;
		}else{
			cout<<"Case #"<<cu<<":"<<" "<<"NO"<<endl;
		}
		cu++;
	}
	return 0;
}

