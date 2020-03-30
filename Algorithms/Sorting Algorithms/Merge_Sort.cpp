#include<bits/stdc++.h>
using namespace std;
void Merge_Sort(auto *arr_begin, auto *arr_end){
    if(arr_begin != (arr_end-1)){
        auto *arr_mid = (arr_begin + arr_end)/2;
        Merge_Sort(arr_begin, arr_mid);
        Merge_Sort(arr_mid, arr_end);
        Merger(arr_begin, arr_mid, arr_mid, arr_end);
    }
}
void Merger(auto arr1_begin, auto arr1_end, auto arr2_begin, auto arr2_end){
    auto itr1 = arr1_begin;
    auto itr2 = arr2_begin;
    while(itr1 != arr1_end || itr2 != arr2_end)
    {

    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
        cin>>arr[i];
    Merge_Sort(arr, arr+n);
    for (int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}
