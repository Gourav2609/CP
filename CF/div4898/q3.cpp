#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Gourav ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);



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

bool isSmaller(string str1, string str2){
	int n1=str1.length(), n2=str2.length();
	if(n1<n2){
		return true;
	}
	if(n2<n1){
		return false;
	}
	
	for(int i=0;i<n1;i++){
		if(str1[i]<str2[i]) return true;
		else if(str1[i]>str2[i]) return false;
	}
	
	return false;
}

// Finding the difference two string in the tradional method

string findDiff(string str1, string str2){
	if (isSmaller(str1, str2))
		swap(str1, str2);
	string str = "";

	int n1 = str1.length(), n2 = str2.length();
	int diff = n1 - n2;

	int carry = 0;

	for (int i = n2 - 1; i >= 0; i--) {
		int sub = ((str1[i + diff] - '0') - (str2[i] - '0')
				- carry);
		if (sub < 0) {
			sub = sub + 10;
			carry = 1;
		}
		else
			carry = 0;

		str.push_back(sub + '0');
	}
	for (int i = n1 - n2 - 1; i >= 0; i--) {
		if (str1[i] == '0' && carry) {
			str.push_back('9');
			continue;
		}
		int sub = ((str1[i] - '0') - carry);
		if (i > 0 || sub > 0) 
			str.push_back(sub + '0');
		carry = 0;
	}

	reverse(str.begin(), str.end());

	return str;
}
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

void solve(){
	char arr[10][10];
	vector<pair<int,int>>arr1;
	
	for(int i = 0 ; i < 10 ; i++){
		for(int j= 0 ; j < 10 ; j++){
			cin>>arr[i][j];
			if(arr[i][j]=='X'){
				int i1=i+1,j1=j+1;
				if(i1>5){
					i1=10-i1+1;
				}
				if(j1>5){
					j1=10-j1+1;
				}
				arr1.push_back(make_pair(i1,j1));
			}
		}
	}
	
	// for(auto i:arr1){
		// cout<<i.first<<" "<<i.second<<endl;
	// }
	// cout<<endl;
// 	
	int point=0;
	
	for(int i = 0 ; i < arr1.size();i++){
		point+=(min(arr1[i].first,arr1[i].second));
	}
	
	cout<<point<<endl;
}


int main(){
	Gourav;
	ll tc;
	cin>>tc;
	while(tc--){
     solve();
	}
	return 0;
}

