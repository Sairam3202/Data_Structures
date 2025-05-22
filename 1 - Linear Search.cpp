#include<iostream>
#include<vector>
using namespace std;

bool Linear_Search(vector<int> arr,int target){
	int n=arr.size();
	for(int i=0;i<arr.size();i++){
		if(arr[i]==target){
			return true;
		}
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
	
	if(Linear_Search(arr,73))
		cout<<"Found";
	else
		cout<<"Not Found";
}
