#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Binary_Search(vector<int>& arr,int target){
	int n=arr.size(),left=0,right=n-1,mid;
	sort(arr.begin(),arr.end());
	while(left<=right){
		mid=left+(right-left)/2;
		if(arr[mid]==target) return true;
		else if(arr[mid]>target) right=mid-1;
		else left=mid+1;
	}
	return false;
}

int main()
{
	vector<int> arr;
	arr.push_back(73);
	arr.push_back(93);
	arr.push_back(30);
	arr.push_back(2);
	arr.push_back(82);
	arr.push_back(44);
	arr.push_back(92);
	arr.push_back(43);
	arr.push_back(75);
	arr.push_back(24);
	arr.push_back(87);
	arr.push_back(46);
	arr.push_back(69);
	arr.push_back(78);
	arr.push_back(64);
	arr.push_back(59);
	
	if(Binary_Search(arr,73))
		cout<<"Found";
	else
		cout<<"Not Found";
}
