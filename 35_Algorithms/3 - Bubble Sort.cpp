#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Bubble_Sort(vector<int>& arr){
	int n=arr.size();
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++)
			if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
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
	
	Bubble_Sort(arr);
}
