#include<bits/stdc++.h>
using namespace std;
void Bubble_Sort(auto *arr_begin, auto *arr_end){
    for ( auto itr1 = arr_begin; itr1 != arr_end; itr1++){
        for ( auto itr2 = arr_begin; itr2 != (arr_end-1); itr2++){
            if ( *itr2 > *(itr2+1)){
                swap(*itr2, *(itr2+1));
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
        cin>>arr[i];
    Bubble_Sort(arr, arr+n);
    for (int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}
