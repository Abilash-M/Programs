//https://www.codingninjas.com/studio/problems/merge-two-sorted-arrays-without-extra-space_6898839

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int m,n;
	m=a.size();
	n=b.size();
	int i=m-1,j=0;
	while(i>=0 && j<n)
	{
		if(a[i]>b[j])
		{
			swap(a[i],b[j]);
			i--,j++;
		}
		else
		break;
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

}
int main() {
    // Example usage
    vector<long long> a = {1, 3, 5, 7};
    vector<long long> b = {2, 4, 6, 8};

    cout << "Array A before merging: ";
    for (long long value : a) {
        cout << value << " ";
    }
    cout << endl;

    cout << "Array B before merging: ";
    for (long long value : b) {
        cout << value << " ";
    }
    cout << endl;

    mergeTwoSortedArraysWithoutExtraSpace(a, b);

   cout << "Array A after merging: ";
    for (long long value : a) {
        cout << value << " ";
    }
    cout << endl;

    cout << "Array B after merging: ";
    for (long long value : b) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
