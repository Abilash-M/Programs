//https://www.codingninjas.com/studio/problems/missing-and-repeating-numbers_6828164?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse


#include <iostream>
#include <vector>
using namespace std;


vector<int> findMissingRepeatingNumbers(vector < int > a) {
    long long int n=a.size();
    long long int Sn= n*(n+1)/2;
    long long int S2n=(n*(n+1)*(2*n+1))/6;
    long long int S=0,S2=0;
    for(int i=0;i<n;i++)
    {
        S+=a[i];
        S2+=(a[i]*a[i]);
    }
    long long int val1,val2;
    val1=S-Sn;
    val2=S2-S2n;
    val2=val2/val1;
    long long int x,y;
    x=(val1+val2)/2;
    y=x-val1;
    //val1=//x+y
    //val2=//x-y
    return {(int)x,(int)y};
}
int main() {
    // Example usage
    vector<int> a = {4, 3, 2, 7, 8, 2, 1, 5};

    cout << "Original Array: ";
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> result = findMissingRepeatingNumbers(a);

    cout << "Missing Number: " << result[0] << endl;
    cout << "Repeating Number: " << result[1] << endl;

    return 0;
}
