#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& arr, int start, int mid, int end) {
	vector<int> temp;
	int i = start;
	int j = mid+1;

	// suppose euqal number of left and right
	while(i<= mid and j<= end) {
		if(arr[i]<= arr[j]) {
			temp.push_back(arr[i]);
			i++;
		}
		else {
			temp.push_back(arr[j]);
			j++;
		}
	} // end of left = right

	//if one side is more than the other
	while(i<=mid) {
		temp.push_back(arr[i]);
		i++;
	}

	while(j<= end) {
		temp.push_back(arr[j]);
		j++;
	}

	// updatng the orginal array from the temp

	for(int idx=0; idx<temp.size(); idx++) {
		arr[start+idx] = temp[idx];
	}
}

void mergeSort(vector<int>& arr, int start,  int end) {
	if(start<end) {
		int mid;
		mid = (start+end)/2;
		mergeSort(arr,start, mid);
		mergeSort(arr,mid+1,end);

		merge(arr,start,mid,end);
	}


}

void display(vector<int>& arr, int n) {
	for(int i=0; i<n; i++) {
		cout<< arr[i] <<" ";
	}
	cout <<"\n";
}
int main() {

	vector<int> arr = {12,31,35,8,32,17};
	int n = arr.size();

	display(arr,n);

	mergeSort(arr,0,n-1);
	display(arr,n);


	return 0;
}